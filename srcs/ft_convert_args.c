/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_args.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/20 16:15:16 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/08 17:14:21 by abourgeu         ###   ########.fr       */
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
		g_sarg.s = "";
		if (ft_strlen(g_sarg.print) == 0 && ft_strlen(g_sarg.s) == 0)
			g_sarg.val_ret = g_sarg.val_ret + 1;
		if (g_sarg.width > ft_strlen(g_sarg.s))
		{
			tmp2 = ft_strnew(g_sarg.width + ft_strlen(g_sarg.s));
			tmp2 = ft_memset(tmp2, ' ', g_sarg.width - g_sarg.val_ret);
			g_sarg.s = ft_strjoin(tmp2, g_sarg.s);
			//free(tmp2);
		}
		return ;
	}
	g_sarg.s[0] = c;
	if (g_sarg.s[0] != '\0')
		ft_resolve_str(str);
}

void		ft_convert_char(va_list args)
{
	g_sarg.s = va_arg(args, char*);
	if (g_sarg.s == NULL)
	{
		g_sarg.s = "(null)";
		g_sarg.val_ret = ft_strlen(g_sarg.s) - 12;
		return ;
	}
	if (g_sarg.ret == 1 && g_sarg.convers != 'p')
		g_sarg.s = ft_strsub(g_sarg.s, 0, g_sarg.prec);
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
			g_sarg.s = ft_ltoa(g_sarg.decimal);
		}
		else
		{
			tmp = va_arg(args, unsigned long);
			g_sarg.decimal = tmp;
			g_sarg.s = ft_ltoa(g_sarg.decimal);
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
			g_sarg.s = "";
			ft_resolve_dec();
			return ;
		}
		g_sarg.decimal = tmp;
		g_sarg.s = ft_itoa(g_sarg.decimal);
	}
	ft_resolve_dec();
	if (g_sarg.s[0] != '-' && ft_strchr(g_sarg.s, '-') != NULL &&
		g_sarg.s[0] != ' ' && g_sarg.s[1] != ' ')
		ft_delete_neg();
}

void		ft_delete_neg(void)
{
	int		i;
	int		j;
	char	*tmp;

	tmp = ft_strnew(1);
	j = 0;
	i = 0;
	while (g_sarg.s[i])
	{
		if (g_sarg.s[i] != '-')
		{
			tmp[j] = g_sarg.s[i];
			j++;
			i++;
		}
		else
			i++;
	}
	tmp[j] = '\0';
	tmp = ft_strjoin("-", tmp);
	g_sarg.s = tmp;
}

// void ft_add_new_0(void)
// {
// 	/* code */
// }
