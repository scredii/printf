/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abourgeu <abourgeu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 13:53:51 by abourgeu          #+#    #+#             */
/*   Updated: 2017/03/06 15:25:21 by abourgeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"


static long		my_longlen(long n)
{
	long		len;

	len = ((n >= 0) ? 1 : 2);
	n = ((n < 0) ? n : -n);
	while (n <= -10 && len++)
		n = (n / -10) * -1;
	return (len);
}

static char		*my_long_to_str(char *str, long n)
{
	if (n <= -10)
	{
		str = my_long_to_str(str, ((n / -10) * -1));
		str[ft_strlen(str)] = (char)(((n % -10) * -1) + '0');
		return (str);
	}
	str[ft_strlen(str)] = (char)(-n + '0');
	return (str);
}

char			*ft_ltoa(long n)
{
	char	*result;

	result = ft_strnew(my_longlen(n));
	if (n < 0)
		result = ft_strcat(result, "-");
	else
		n = -n;
	return (my_long_to_str(result, n));
}
