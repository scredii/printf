/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 18:09:29 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/08 11:04:13 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static intmax_t		ft_get_len(intmax_t *n, intmax_t *min)
{
	intmax_t		i;
	intmax_t		len;

	len = 1;
	i = 1;
	if (*n < 0)
	{
		*min = *min + 1;
		*n *= -1;
		len++;
	}
	while ((*n / i) >= 10)
	{
		i *= 10;
		len++;
	}
	return (len);
}

char				*ft_itoa(intmax_t n)
{
	intmax_t		len;
	intmax_t		min;
	char			*str;

	min = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_get_len(&n, &min);
	if (!(str = ft_strnew(len)))
		return (NULL);
	if (min == 1)
		str[0] = '-';
	while (len-- > min)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
