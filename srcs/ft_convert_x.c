/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 18:59:57 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/06 16:36:33 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>
void 		ft_job_for_x(va_list args, char *tmp)
{
	ft_convert_format_x(args);
	ft_resolve_width_x(tmp);
	if (ft_strlen(g_sarg.printstr) > 0)
		ft_convert_hexa();
	ft_resolve_dec();
}

void 		ft_convert_format_x(va_list args)
{
	int tmp;

	if (ft_strlen(g_sarg.length) > 0 &&
			ft_strchr(LENGTH, g_sarg.length[0]) != NULL)
		ft_convert_length_x(args);
	else
	{
		tmp = va_arg(args,long long);
		if (tmp == 0)
			return;
		g_sarg.decimal = tmp;
		g_sarg.printstr = ft_lltoa_base((unsigned int)g_sarg.decimal, 16);
	}
}

void 		ft_convert_length_x(va_list args)
{
	if (ft_strchr(&g_sarg.length[0], 'l') != NULL &&
		ft_strchr(&g_sarg.length[1], 'l') != NULL)
	{
		g_sarg.decimal = va_arg(args, long long);
		g_sarg.printstr = ft_lltoa_base(g_sarg.decimal, 16);
		return;
	}
	if (ft_strchr(g_sarg.length, 'l') != NULL)
	{
		g_sarg.decimal = va_arg(args, long);
		g_sarg.printstr = ft_ltoa_base(g_sarg.decimal, 16);
		return;
	}
	if (ft_strchr(g_sarg.length, 'h') != NULL)
	{
		g_sarg.decimal = va_arg(args, int);
		return;
	}
	if (ft_strchr(g_sarg.length, 'j') != NULL)
	{
		g_sarg.decimal = va_arg(args, uintmax_t);
		g_sarg.printstr = ft_imtoa_base(g_sarg.decimal, 16);
	}
}

void 		ft_resolve_width_x(char *tmp)
{
	if (ft_strchr(g_sarg.option, '0') != NULL && ft_strchr(g_sarg.option, '-') == NULL)
	{
		if (ft_strchr(g_sarg.option, '#') != NULL)
		{
			tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.printstr) - 2);
			g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
			ft_convert_hexa();
			return ;
		}
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.printstr)/* - 2*/);
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
	}
}

void		ft_convert_hexa(void)
{
	int		i;

	i = -1;
	if (g_sarg.convers == 'x')
	{
		while (g_sarg.printstr[++i])
			if (ft_isdigit(g_sarg.printstr[i]) == 0)
				g_sarg.printstr[i] = ft_tolower(g_sarg.printstr[i]);
		if (ft_strchr(g_sarg.option, '#') != NULL && g_sarg.printstr[1] != 'x')
			g_sarg.printstr = ft_strjoin("0x", g_sarg.printstr );
	}
	if (g_sarg.convers == 'X')
	{
		while (g_sarg.printstr[++i])
			if (ft_isdigit(g_sarg.printstr[i]) == 0)
				g_sarg.printstr[i] = ft_toupper(g_sarg.printstr[i]);
		if (ft_strchr(g_sarg.option, '#') != NULL)
			g_sarg.printstr = ft_strjoin("0X", g_sarg.printstr);
	}
}
