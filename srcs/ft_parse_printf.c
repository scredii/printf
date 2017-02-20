/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_printf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 17:56:09 by abourgeu          #+#    #+#             */
/*   Updated: 2017/02/08 17:17:04 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"
#include <stdio.h>

int			ft_parse_convers(char *str, int i)
{
	while (str[i])
	{
		if (ft_strchr(CONVERS, str[i]) != NULL)
		{
			g_sarg.convers = str[i];
			return (1);
		}
		if (str[i] == '%')
		{
			g_sarg.convers = str[i];
			return (1);
		}
		i++;
	}
	return (0);
}

int			ft_parse_length(char *str, int i)
{
	int		j;

	j = 0;
	g_sarg.length[0] = '\0';
	g_sarg.length[1] = '\0';
	while (ft_strchr(CONVERS, str[i]) == NULL)
	{
		while (ft_strchr(LENGTH, str[i]) != NULL)
		{
			g_sarg.length[j] = str[i];
			i++;
			j++;
		}
		i++;
	}
	if (ft_strlen(g_sarg.length) > 0)
		return (1);
	return (0);
}

int			ft_get_option(char *str, int i)
{
	int		j;

	j = 0;
	while (ft_strchr(OPT, str[i]) != NULL)
	{
		g_sarg.option[j] = str[i];
		i++;
		j++;
	}
	if (ft_strlen(g_sarg.option) > 0)
		return (1);
	return (0);
}

int			ft_parse_prec(char *str, int i)
{
	char	*tmp;
	int		j;

	j = 0;
	if (!(tmp = (char*)malloc(sizeof(char))))
		return (-1);
	while (str[i] && ft_strchr(CONVERS, str[i]) == 0 &&
			ft_strchr(LENGTH, str[i]) == 0)
	{
		if (str[i] == '.')
		{
			i += 1;
			while (ft_isdigit(str[i]) == 1 && ft_strchr(CONVERS, str[i]) == 0 &&
					ft_strchr(LENGTH, str[i]) == 0)
			{
				tmp[j] = str[i];
				j++;
				i++;
			}
		}
		i++;
	}
	if (j != 0)
		g_sarg.ret = 1;
	g_sarg.prec = ft_atoi(tmp);
	//free(tmp);
	if (g_sarg.prec != 0)
		return (1);
	return (0);
}
