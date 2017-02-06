/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:34:32 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/06 17:22:21 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void ft_resolve_width(void)
{
	char *tmp2;

	tmp2 = ft_strnew(1000);
	if (g_sarg.width > g_sarg.precision)
	{
		if (ft_strchr(g_sarg.option, '-') == NULL &&
			g_sarg.width > ft_strlen(g_sarg.printstr) && ft_strlen(g_sarg.printstr) == 0)
		{
			tmp2 = ft_memset(tmp2, ' ', g_sarg.width);
			g_sarg.printstr = ft_strjoin(tmp2, g_sarg.printstr);
			return ;
		}
		if (ft_strchr(g_sarg.option, '-') == NULL &&
			g_sarg.width > ft_strlen(g_sarg.printstr))
		{
			tmp2 = ft_memset(tmp2, ' ', (g_sarg.width - ft_strlen(g_sarg.printstr)));
			g_sarg.printstr = ft_strjoin(tmp2, g_sarg.printstr);
			return ;
		}
		if (ft_strchr(g_sarg.option, '-') != NULL &&
			g_sarg.width > ft_strlen(g_sarg.printstr))
		{
			tmp2 = ft_memset(tmp2, ' ', (g_sarg.width - ft_strlen(g_sarg.printstr)));
			g_sarg.printstr = ft_strjoin(g_sarg.printstr, tmp2);
		}
	}
}

void ft_resolve_width_octal(char *tmp)
{
	if (g_sarg.convers == 'o' && ft_strchr(g_sarg.option, '0') != NULL &&
		ft_strchr(g_sarg.option, '-') == NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.printstr));
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
	}
	if (g_sarg.convers == 'o' && ft_strchr(g_sarg.option, '#') != NULL &&
		g_sarg.printstr[0] != '0')
	{
		g_sarg.printstr = ft_strjoin("0", g_sarg.printstr);
	}
}

void ft_resolve_oneperc(char *str)
{
	g_sarg.printstr = "%";
	ft_resolve_str(str);
	ft_resolve_width();
	g_sarg.val_ret = ft_strlen(g_sarg.printstr);
	ft_putstr(g_sarg.printstr);
}

void ft_ret_value()
{
	char *tmp;

	tmp = ft_strnew(1000);
	tmp = ft_itoa(g_sarg.decimal);
	g_sarg.val_ret = ft_strlen(tmp);
	free(tmp);
}