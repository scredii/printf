/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 16:04:55 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/08 22:48:27 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

static int			ft_parse_width(char *str, int i)
{
	char	*tmp;
	int		j;

	j = 0;
	tmp = ft_strnew(1);
	while (str[i] != '.' && ft_strchr(CONVERS, str[i]) == 0 &&
			ft_strchr(LENGTH, str[i]) == 0)
	{
		if (ft_isdigit(str[i]) == 1)
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	g_sarg.width = ft_atoi(tmp);
	if (g_sarg.width != 0)
		return (1);
	return (0);
}

void		ft_parsing(char *str, int i)
{
	ft_get_option(str, i);
	ft_parse_width(str, i);
	ft_parse_prec(str, i);
	ft_parse_length(str, i);
	ft_parse_convers(str, i);
}

int			ft_parse_params(char *str, va_list args)
{
	int		i;
	int		j;
	int		ret;

	g_sarg.print = ft_strnew(1000);
	j = 0;
	i = -1;
	while (str[++i] && str)
	{
		if (str[i] == '%')
		{
			i += 1;
			ft_parsing(str, i);
			if (g_sarg.convers == '%')
			{
				ft_resolve_oneperc();
				j += 1;
			}
			if (ft_strchr(CONVERS, str[i]) == NULL && str[i] != '%')
			{
				ft_len_form(str, i);
				i += g_sarg.len_form - 1;
			}
			ft_check_convers(args);
			if (ft_strlen(g_sarg.print) > 0 || str[i + 1] != '\0')
				g_sarg.print = ft_strjoinfree(g_sarg.print, g_sarg.s, 0, 0);
			if (g_sarg.prec == 0 && g_sarg.ret == 1 &&
					ft_strchr(CONVERS, str[i + 1]) != NULL)
				j += 1;
			j += ft_strlen(g_sarg.s);
			g_sarg.len_form = 0;
			g_sarg.val_ret = g_sarg.val_ret + ft_strlen(g_sarg.s);
		}
		else
		{
			g_sarg.print[j] = str[i];
			g_sarg.val_ret++;
			j++;
		}
		g_sarg.print[j] = '\0';
	}
	ret = ft_put_printf();
	return (0 + ret);
}

int			ft_put_printf(void)
{
	if (ft_strlen(g_sarg.print) > 0)
	{
		if ((g_sarg.convers == 'c' && g_sarg.s[0] == '\0'))
			g_sarg.val_ret += 1;
		ft_putstr(g_sarg.print);
		return (1);
	}
	if (g_sarg.s[0] == '\0' && ft_strlen(g_sarg.print) <= 0 &&
			g_sarg.convers != 'c')
	{
		ft_ret_value();
		ft_putnbr(g_sarg.decimal);
		return (0);
	}
	else
		ft_putstr(g_sarg.s);
	return (0);
}

int			ft_parse_printf(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '%' && str[i + 1] != '\0')
			return (0);
		if (str[i] == '%' && str[i + 1] == '%')
			return (0);
		if (str[i] == '%' && str[i + 1] == '\0')
		{
			ft_end_percent(str);
			return (1);
		}
		if (str[i + 1] == '\0')
		{
			ft_putstr(str);
			g_sarg.val_ret = ft_strlen(str);
			// if (str[0] == '\n' && g_sarg.convers == 0)
			// 	g_sarg.val_ret = 0;
			return (1);
		}
		i++;
	}
	return (1);
}
void ft_clean(void)
{
	// if(ft_strlen(g_sarg.option) > 1)
	// 	ft_strdel(&g_sarg.option);
	// if(ft_strlen(g_sarg.length) > 1)
	// 	ft_strdel(&g_sarg.length);
	// if(g_sarg.s)
	// 	ft_strdel(&g_sarg.s);
	// if(g_sarg.print)
	// 	ft_strdel(&g_sarg.print);
}


void		ft_end_percent(char *str)
{
	int		j;

	j = -1;
	while(++j < (int)ft_strlen(str) - 1)
	{
		write(1, &str[j], 1);
		g_sarg.val_ret++;
	}
}

int			ft_printf(const char *str, ...)
{
	va_list	args;
	int		ret;

	va_start(args, str);
	g_sarg.val_ret = 0;
	ret = ft_parse_printf((char*)str);
	if (ret == 0)
		ft_parse_params((char*)str, args);
	va_end(args);
	ft_clean();
	return (g_sarg.val_ret);
}
