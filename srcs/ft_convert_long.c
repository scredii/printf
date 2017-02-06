/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 13:57:13 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/06 18:10:33 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int		ft_convert_format(va_list args)
{
	int		tmp;

	if (ft_strchr(&g_sarg.length[0], 'l') != NULL &&
			ft_strchr(&g_sarg.length[1], 'l') != NULL)
	{
		g_sarg.decimal = (uintmax_t)va_arg(args, long long);
		g_sarg.printstr = ft_lltoa(g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(&g_sarg.length[0], 'h') != NULL &&
			ft_strchr(&g_sarg.length[1], 'h') != NULL)
	{
		g_sarg.decimal = va_arg(args, int);
		g_sarg.printstr = ft_ltoa((signed char)g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(g_sarg.length, 'l') != NULL)
	{
		g_sarg.decimal = (long)va_arg(args, unsigned long);
		g_sarg.printstr = ft_ltoa(g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(g_sarg.length, 'h') != NULL && g_sarg.convers != 'U' && g_sarg.convers != 'u')
	{
		g_sarg.decimal = va_arg(args, int);
		g_sarg.printstr = ft_itoa((short)g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(g_sarg.length, 'z') != NULL)
	{
		g_sarg.decimal = va_arg(args, size_t);
		g_sarg.printstr = ft_ltoa((size_t)g_sarg.decimal);
		return (1);
	}
	if (ft_strchr(g_sarg.length, 'j') != NULL)
	{
		g_sarg.decimal = va_arg(args, size_t);
		g_sarg.printstr = ft_ltoa((size_t)g_sarg.decimal);
		return (1);
	}
	if (g_sarg.convers == 'o')
	{
		tmp = va_arg(args, int);
		if (tmp == 0 && g_sarg.ret == 0 /*&& g_sarg.convers != 'd'*/)
		{
			g_sarg.printstr = "0";
			return (1);
		}
		if (tmp == 0 && g_sarg.ret == 1)
		{
			g_sarg.printstr = "";
			return (1);
		}
		g_sarg.decimal = tmp;
		g_sarg.printstr = ft_itoa_base((int)g_sarg.decimal, 8);
		return (1);
	}
	return (0);
}
