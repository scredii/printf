/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:15:16 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/06 18:07:21 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void		ft_convert_c(char *tmp, va_list args, char *str)
{
	char c;
	char *tmp2;

	c = (char)va_arg(args, int);
	tmp = &c;
	if (tmp[0] == '\0')
	{
		g_sarg.printstr = "";
		if (ft_strlen(g_sarg.print) == 0)
			g_sarg.val_ret = g_sarg.val_ret + 1;
		if (g_sarg.width > ft_strlen(g_sarg.printstr))
		{
			tmp2 = ft_strnew(g_sarg.width + ft_strlen(g_sarg.printstr));
			tmp2 = ft_memset(tmp2, ' ', g_sarg.width - g_sarg.val_ret);
			g_sarg.printstr = ft_strjoin(tmp2, g_sarg.printstr);
			free(tmp2);
		}
		return ;
	}
	g_sarg.printstr[0] = c;
	if (g_sarg.printstr[0] != '\0')
		ft_resolve_str(str);
}

void		ft_convert_char(va_list args)
{
	g_sarg.printstr = va_arg(args, char*);
	if (g_sarg.printstr == NULL)
	{
		g_sarg.printstr = "(null)";
		g_sarg.val_ret = ft_strlen(g_sarg.printstr) - 12;
		return ;
	}
	if (g_sarg.ret == 1 && g_sarg.convers != 'p')
		g_sarg.printstr = ft_strsub(g_sarg.printstr, 0, g_sarg.precision);
}

void		ft_convert_u(va_list args)
{
	long long		tmp;
	int				ret;

	ret = ft_convert_format(args);
	if (ret == 0)
	{
		if (g_sarg.convers == 'u')
		{
			tmp = (unsigned int)va_arg(args, unsigned int);
			g_sarg.decimal = tmp;
			g_sarg.printstr = ft_ltoa(g_sarg.decimal);
		}
		else
		{
			tmp = va_arg(args, unsigned long);
			g_sarg.decimal = tmp;
			g_sarg.printstr = ft_ltoa(g_sarg.decimal);
		}
	}
	ft_resolve_dec();
}

void		ft_convert_d(va_list args)
{
	long long		tmp;
	int				ret;

	ret = ft_convert_format(args);
	if (ret == 0)
	{
		tmp = va_arg(args, long long);
		if (tmp == 0 && g_sarg.ret == 1 &&
				ft_strchr(g_sarg.option, '0') == NULL)
		{
			g_sarg.printstr = "";
			ft_resolve_dec();
			return ;
		}
		g_sarg.decimal = tmp;
		g_sarg.printstr = ft_itoa(g_sarg.decimal);
	}
	ft_resolve_dec();
	if (g_sarg.printstr[0] != '-' && ft_strchr(g_sarg.printstr, '-') != NULL &&
		g_sarg.printstr[0] != ' ' && g_sarg.printstr[1] != ' ')
		ft_delete_neg();
}

void		ft_delete_neg(void)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = ft_strnew(ft_strlen(g_sarg.printstr) + g_sarg.width);
	j = 0;
	i = 0;
	while (g_sarg.printstr[i])
	{
		if (g_sarg.printstr[i] != '-')
		{
			tmp[j] = g_sarg.printstr[i];
			j++;
			i++;
		}
		else
			i++;
	}
	tmp[i] = '\0';
	tmp = ft_strjoin("-", tmp);
	g_sarg.printstr = tmp;
	free(tmp);
}
