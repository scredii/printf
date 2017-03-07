/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 18:06:56 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/07 13:24:16 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void		ft_check_convers(va_list args)
{
	char *tmp;

	tmp = ft_strnew(1);
	g_sarg.s = ft_strnew(1);
	if (CONV == 'p')
		ft_convert_p(args);
	if (CONV == 's' || CONV == 'S')
	{
		ft_convert_char(args);
		ft_resolve_str();
	}
	if (CONV == 'o')
		ft_convert_o(args);
	if (CONV == 'd' || CONV == 'i' || CONV == 'O')
		ft_convert_d(args);
	if (CONV == 'x' || CONV == 'X')
		ft_job_for_x(args, tmp);
	if (CONV == 'u' || CONV == 'U' || CONV == 'D')
		ft_convert_u(args);
	if (CONV == 'c' || CONV == 'C')
		ft_convert_c(tmp, args);
	free(tmp);
}

void 		ft_convert_p(va_list args)
{
	g_sarg.s = ft_itoa_base(va_arg(args, int), HEXA, 16);
	ft_convert_hexa();
}

void		ft_resolve_str(void)
{
	char	*tmp;

	tmp = ft_strnew(1);
	if (ft_strchr(g_sarg.option, '-') != NULL)
	{
		if (g_sarg.width > ft_strlen(g_sarg.s))
		{
			tmp = ft_memset(tmp, ' ', (g_sarg.width - ft_strlen(g_sarg.s)));
			g_sarg.s = ft_strjoin(g_sarg.s, tmp);
		}
	}
	if (ft_strchr(g_sarg.option, '-') == NULL && g_sarg.width > 0)
	{
		tmp = ft_memset(tmp, ' ', (g_sarg.width - ft_strlen(g_sarg.s)));
		g_sarg.s = ft_strjoin(tmp, g_sarg.s);
	}
	free(tmp);
}

void		ft_len_form(char *str, int i)
{
	int j;

	j = 0;
	i -= 1;
	while (ft_strchr(CONVERS, str[i]) == NULL)
	{
		g_sarg.len_form++;
		if (j == 10)
		{
			g_sarg.len_form = 0;
			break;
		}
		j++;
		i++;
	}
}

void		ft_double_percent(char *str, int i)
{
	i += 1;
	while (str[i])
	{
		ft_putchar(str[i]);
		g_sarg.val_ret += 1;
		i++;
	}
}
