/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshresth <sshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 17:37:44 by sshresth          #+#    #+#             */
/*   Updated: 2024/03/05 17:59:22 by sshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	counter;
	int	num;
	int	sum;
	int	sign;

	counter = 0;
	num = 0;
	sum = 0;
	sign = 1;
	while (str[counter] == ' ' || (str[counter] >= 9 && str[counter] <= 13))
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			sign = -1;
		counter++;
	}
	while (str[counter] >= 48 && str[counter] <= 57)
	{
		num = str[counter] - '0';
		sum = sum * 10 + num;
		counter++;
	}
	return (sum * sign);
}
