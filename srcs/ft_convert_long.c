/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 13:57:13 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/02 23:43:07 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		ft_convert_format(va_list args)
{
	int		ret;

	if (ft_strchr(&g_sarg.length[0], 'l') != NULL &&
			ft_strchr(&g_sarg.length[1], 'l') != NULL)
	{
		g_sarg.decimal = (uintmax_t)va_arg(args, long long);
		g_sarg.s = ft_lltoa(g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(&g_sarg.length[0], 'h') != NULL &&
			ft_strchr(&g_sarg.length[1], 'h') != NULL)
	{
		g_sarg.decimal = va_arg(args, int);
		g_sarg.s = ft_ltoa((signed char)g_sarg.decimal);
		return (1);
	}
	ret = convert_format_2(args);
	if (g_sarg.convers == 'o' && ft_strlen(g_sarg.length) == 0)
	{
		ft_convert_o(args);
		return (1);
	}
	return (0 + ret);
}

int		convert_format_2(va_list args)
{
	if (ft_strchr(g_sarg.length, 'l') != NULL)
	{
		g_sarg.decimal = (long)va_arg(args, unsigned long);
		g_sarg.s = ft_ltoa(g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(g_sarg.length, 'h') != NULL &&
		g_sarg.convers != 'U' && g_sarg.convers != 'u')
	{
		g_sarg.decimal = va_arg(args, int);
		g_sarg.s = ft_itoa((short)g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(g_sarg.length, 'z') != NULL ||
			ft_strchr(g_sarg.length, 'j') != NULL)
	{
		g_sarg.decimal = (size_t)va_arg(args, size_t);
		g_sarg.s = ft_ltoa((size_t)g_sarg.decimal);
		// g_sarg.decimal = (uintmax_t)va_arg(args, long long);
		// g_sarg.s = ft_lltoa(g_sarg.decimal);
		return (1);
	}
	return (0);
}

void	ft_convert_o(va_list args)
{
	int		tmp;

	tmp = va_arg(args, int);
	if (tmp == 0 && g_sarg.ret == 0)
	{
		g_sarg.s = "0";
		return ;
	}
	if (tmp == 0 && g_sarg.ret == 1)
	{
		g_sarg.s = "";
		return ;
	}
	g_sarg.decimal = tmp;
	g_sarg.s = ft_itoa_base((int)g_sarg.decimal, 8);
	return ;
}
