/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 19:12:18 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/06 17:20:38 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void			ft_resolve_dec(void)
{
	char	*tmp;

	tmp = ft_strnew(1000);
	if (g_sarg.convers == 'u' && g_sarg.width > 0 && ft_strchr(g_sarg.option, '0') != NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.printstr));
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
	}
	if (g_sarg.width > 0 && ft_strchr(g_sarg.option, '0') != NULL
		&& g_sarg.convers == 'd' && ft_strchr(g_sarg.option, '-') == NULL)
	{
		if (g_sarg.precision > 0 && g_sarg.ret == 1)
		{
			tmp = ft_memset(tmp, '0', g_sarg.width - g_sarg.precision);
			g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
			if (g_sarg.width != 0)
				ft_resolve_width();
			return;
		}
		if (ft_strchr(g_sarg.option, '+') != NULL && ft_strchr(g_sarg.option, '0') != NULL)
		{
			tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.printstr) - 1);
			g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
			if (ft_strchr(g_sarg.option, '+') != NULL && ft_strchr(g_sarg.printstr, '-') == NULL && g_sarg.convers != 'u')
			{
				tmp = "+";
				g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
				return ;
			}
		}
		else
			tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.printstr));
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
	}
	if (g_sarg.ret == 1 && (size_t)g_sarg.precision > ft_strlen(g_sarg.printstr))
	{
		if (g_sarg.decimal > 0)
			tmp = ft_memset(tmp, '0', g_sarg.precision - ft_strlen(g_sarg.printstr));
		else
			tmp = ft_memset(tmp, '0', g_sarg.precision - ft_strlen(g_sarg.printstr) + 1);
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
	}
	if (ft_strchr(g_sarg.option, ' ') != NULL && g_sarg.convers == 'd'
		&& ft_strchr(g_sarg.option, '-') == NULL &&
		ft_strchr(g_sarg.option, '+') == NULL && g_sarg.printstr[0] != '-')
		g_sarg.printstr = ft_strjoin(" ", g_sarg.printstr);
	if (g_sarg.convers == 'o')
		ft_resolve_width_octal(tmp);
	if (ft_strchr(g_sarg.option, '+') != NULL && ft_strchr(g_sarg.printstr, '-') == NULL && g_sarg.convers != 'u')
	{
		tmp = "+";
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
	}
	if (g_sarg.width != 0)
		ft_resolve_width();
}
