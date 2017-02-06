/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resolve_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 18:06:56 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/06 16:51:32 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

void		ft_check_convers(va_list args, char *str)
{
	char *tmp;

	tmp = ft_strnew(ft_strlen(str) * g_sarg.width);
	if (!(g_sarg.printstr = (char *)malloc(sizeof(char) * 1000)))
		return ;
	if (g_sarg.convers == 's' || g_sarg.convers == 'S' || g_sarg.convers == 'p')
	{
		ft_convert_char(args);
		ft_resolve_str(str);
	}
	if (g_sarg.convers == 'd' || g_sarg.convers == 'o')
		ft_convert_d(args);
	if ( g_sarg.convers == 'x' || g_sarg.convers == 'X')
		ft_job_for_x(args, tmp);
	if (g_sarg.convers == 'u' || g_sarg.convers == 'U')
		ft_convert_u(args);
	if (g_sarg.convers == 'c' || g_sarg.convers == 'C')
		ft_convert_c(tmp, args, str);
}

void		ft_resolve_str(char *str)
{
	char	*tmp;


	tmp = ft_strnew(ft_strlen(str) * g_sarg.width);
	if (ft_strchr(g_sarg.option, '-') != NULL)
	{
		if ((size_t)g_sarg.width > ft_strlen(g_sarg.printstr))
			tmp = ft_memset(tmp, ' ', (g_sarg.width - ft_strlen(g_sarg.printstr)));
		g_sarg.printstr = ft_strjoin(g_sarg.printstr, tmp);
	}
	if (ft_strchr(g_sarg.option, '-') == NULL && g_sarg.width > 0)
	{
		tmp = ft_memset(tmp, ' ', (g_sarg.width - ft_strlen(g_sarg.printstr)));
		g_sarg.printstr = ft_strjoin(tmp, g_sarg.printstr);
		free(tmp);
	}
}

void		ft_len_form(char *str, int i)
{
	i--;
	while (ft_strchr(CONVERS, str[i]) == NULL)
	{
		g_sarg.len_form++;
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