/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_dec.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 19:12:18 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/08 17:20:54 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void		ft_resolve_zero(char *tmp)
{
	if (g_sarg.prec > 0 && g_sarg.ret == 1)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - g_sarg.prec);
		g_sarg.s = ft_strjoin(tmp, g_sarg.s);
		if (g_sarg.width != 0)
			ft_resolve_width();
		return ;
	}
	if (ft_strchr(g_sarg.option, '+') != NULL &&
			ft_strchr(g_sarg.option, '0') != NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s) - 1);
		g_sarg.s = ft_strjoin(tmp, g_sarg.s);
		if (ft_strchr(g_sarg.option, '+') != NULL &&
			ft_strchr(g_sarg.s, '-') == NULL && g_sarg.convers != 'u')
		{
			tmp = "+";
			g_sarg.s = ft_strjoin(tmp, g_sarg.s);
			return ;
		}
	}
	else
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s));
	g_sarg.s = ft_strjoin(tmp, g_sarg.s);
}

void		ft_resolve_dec(void)
{
	char	*tmp;

	tmp = ft_strnew(1000);
	if (g_sarg.convers == 'u' && g_sarg.width > 0 &&
			ft_strchr(g_sarg.option, '0') != NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s));
		g_sarg.s = ft_strjoin(tmp, g_sarg.s);
	}
	if (g_sarg.width > 0 && ft_strchr(g_sarg.option, '0') != NULL
		&& g_sarg.convers == 'd' && ft_strchr(g_sarg.option, '-') == NULL)
		ft_resolve_zero(tmp);
	ft_resolve_dec2(tmp);
	free(tmp);
}

void		ft_resolve_dec2(char *tmp)
{
	if (g_sarg.ret == 1 && (size_t)g_sarg.prec > ft_strlen(g_sarg.s))
	{
		if (g_sarg.decimal > 0)
			tmp = ft_memset(tmp, '0', g_sarg.prec - ft_strlen(g_sarg.s));
		else
			tmp = ft_memset(tmp, '0', g_sarg.prec - ft_strlen(g_sarg.s) + 1);
		g_sarg.s = ft_strjoin(tmp, g_sarg.s);
	}
	if (ft_strchr(g_sarg.option, ' ') != NULL && g_sarg.convers == 'd'
		&& ft_strchr(g_sarg.option, '-') == NULL &&
		ft_strchr(g_sarg.option, '+') == NULL && g_sarg.s[0] != '-')
		g_sarg.s = ft_strjoin(" ", g_sarg.s);
	if (g_sarg.convers == 'o')
		ft_resolve_width_octal(tmp);
	if (ft_strchr(g_sarg.option, '+') != NULL && g_sarg.s[0] != '+' &&
		ft_strchr(g_sarg.s, '-') == NULL && g_sarg.convers != 'u')
	{
		tmp = "+";
		g_sarg.s = ft_strjoin(tmp, g_sarg.s);
	}
	if (g_sarg.width != 0)
		ft_resolve_width();
}
