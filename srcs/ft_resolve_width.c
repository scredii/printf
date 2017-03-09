/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:34:32 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/08 16:53:06 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void		ft_resolve_width(void)
{
	char	*tmp2;

	tmp2 = ft_strnew(ft_strlen(g_sarg.s) * g_sarg.width);
	if (g_sarg.width > g_sarg.prec)
	{
		if (ft_strchr(g_sarg.option, '-') == NULL &&
			g_sarg.width > ft_strlen(g_sarg.s))
		{
			tmp2 = ft_memset(tmp2, ' ', (g_sarg.width - ft_strlen(g_sarg.s)));
			g_sarg.s = ft_strjoin(tmp2, g_sarg.s);
		}
		if (ft_strchr(g_sarg.option, '-') != NULL &&
			g_sarg.width > ft_strlen(g_sarg.s))
		{
			tmp2 = ft_memset(tmp2, ' ', (g_sarg.width - ft_strlen(g_sarg.s)));
			g_sarg.s = ft_strjoin(g_sarg.s, tmp2);
		}
	}
	// free(tmp2);
}

void		ft_resolve_width_octal(char *tmp)
{
	if (ft_strchr(g_sarg.option, '0') != NULL &&
			ft_strchr(g_sarg.option, '-') == NULL)
	{
		tmp = ft_memset(tmp, '0', g_sarg.width - ft_strlen(g_sarg.s));
		g_sarg.s = ft_strjoinfree(tmp, g_sarg.s, 1, 0);
	}
	if (ft_strchr(g_sarg.option, '#') != NULL && g_sarg.s[0] != '0')
		g_sarg.s = ft_strjoin("0", g_sarg.s);
}

void		ft_resolve_oneperc(void)
{
	g_sarg.print = ft_strjoin(g_sarg.print, "%");
	g_sarg.val_ret += 1;
}

void		ft_ret_value(void)
{
	char *tmp;

	tmp = ft_itoa(g_sarg.decimal);
	g_sarg.val_ret = ft_strlen(tmp);
}
