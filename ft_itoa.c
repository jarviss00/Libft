/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshresth <sshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 12:02:12 by sshresth          #+#    #+#             */
/*   Updated: 2024/03/22 12:05:11 by sshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlength(int num)
{
	int	length;

	length = 0;
	if (num < 1)
		length++;
	while (num)
	{
		num /= 10;
		length++;
	}
	return (length);
}

static long long	ft_absvalue(long long n)
{
	long long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

static char	*ft_strnew(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int				sign;
	int				length;
	char			*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	length = ft_numlength(n);
	str = ft_strnew(length);
	if (!str)
		return (NULL);
	*(str + length) = '\0';
	num = ft_absvalue(n);
	while (length--)
	{
		*(str + length) = 48 + num % 10;
		num /= 10;
	}
	if (sign)
		*(str) = 45;
	return (str);
}
