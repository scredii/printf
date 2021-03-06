/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 15:49:43 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/07 13:15:59 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

uintmax_t		ft_poweru(uintmax_t n, uintmax_t base)
{
	int		count;

	count = 0;
	while (n > 0)
	{
		n = n / base;
		count++;
	}
	return (count);
}

char			*ft_itoa_base(uintmax_t n, char *s, int base)
{
	uintmax_t		len;
	char			*str;
	uintmax_t		i;

	i = 0;
	if (!s || !base)
		return (NULL);
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_poweru(n, base);
	len = i;
	str = ft_strnew(len);
	while (len)
	{
		str[len - 1] = s[(n % base)];
		n = n / base;
		len--;
	}
	return (str);
}
