/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 10:58:31 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/07 10:59:02 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static uintmax_t		ft_get_len(uintmax_t *n)
{
	uintmax_t		i;
	uintmax_t		len;

	len = 1;
	i = 1;
	while ((*n / i) >= 10)
	{
		i *= 10;
		len++;
	}
	return (len);
}

char					*ft_uitoa(uintmax_t n)
{
	uintmax_t		len;
	char			*str;

	len = ft_get_len(&n);
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
