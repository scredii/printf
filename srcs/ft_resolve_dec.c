/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 19:12:18 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/08 16:57:39 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void		ft_resolve_zero(char *tmp)
{
	if (g_sarg.prec > 0 && g_sarg.ret == 1)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - g_sarg.prec);
		g_sarg.s = ft_strjoinfree(tmp, g_sarg.s, 0, 0);
		if (g_sarg.width != 0)
			ft_resolve_width();
		return ;
	}
	if (ft_strchr(g_sarg.option, '+') != NULL &&
			ft_strchr(g_sarg.option, '0') != NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s) - 1);
		g_sarg.s = ft_strjoinfree(tmp, g_sarg.s, 0, 0);
		if (ft_strchr(g_sarg.option, '+') != NULL &&
			ft_strchr(g_sarg.s, '-') == NULL && CONV != 'u')
		{
			g_sarg.s = ft_strjoin("+", g_sarg.s);
			return ;
		}
	}
	else
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s));
	g_sarg.s = ft_strjoinfree(tmp, g_sarg.s, 0, 0);
}

void		ft_resolve_dec(void)
{
	char	*tmp;

	tmp = ft_strnew(100);
	if (CONV == 'u' && g_sarg.width > 0 &&
		ft_strchr(g_sarg.option, '0') != NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s));
		g_sarg.s = ft_strjoinfree(tmp, g_sarg.s, 0, 0);
		}
	if (g_sarg.width > ft_strlen(g_sarg.s) && ft_strchr(g_sarg.option, '0') != NULL
		&& CONV == 'd' && ft_strchr(g_sarg.option, '-') == NULL)
		ft_resolve_zero(tmp);
	if (ft_strchr(g_sarg.option, '#') != NULL && (CONV == 'O' ||
		CONV == 'x' || CONV == 'X') && ft_strlen(g_sarg.s) < 2)
	{
		g_sarg.s = ft_strjoin("0", g_sarg.s);
	}
	ft_resolve_dec2(tmp);
	//free(tmp);
}

void		ft_resolve_dec2(char *tmp)
{
	if (g_sarg.ret == 1 && g_sarg.prec > ft_strlen(g_sarg.s))
	{
		if (g_sarg.decimal > 0)
			tmp = ft_memset(tmp, '0', g_sarg.prec - ft_strlen(g_sarg.s));
		if (ft_strchr(g_sarg.s, '-') != NULL)
			tmp = ft_memset(tmp, '0', g_sarg.prec - ft_strlen(g_sarg.s) + 1);
		g_sarg.s = ft_strjoinfree(tmp, g_sarg.s, 0, 0);
	}
	if (ft_strchr(g_sarg.option, ' ') != NULL && CONV == 'd'
		&& ft_strchr(g_sarg.option, '-') == NULL &&
		ft_strchr(g_sarg.option, '+') == NULL && g_sarg.s[0] != '-')
		g_sarg.s = ft_strjoin(" ", g_sarg.s);
	if (CONV == 'o')
		ft_resolve_width_octal(tmp);
	if (ft_strchr(g_sarg.option, '+') != NULL && g_sarg.s[0] != '+' &&
		ft_strchr(g_sarg.s, '-') == NULL && CONV != 'u')
		g_sarg.s = ft_strjoin("+", g_sarg.s);
	if (g_sarg.width != 0)
		ft_resolve_width();
}
