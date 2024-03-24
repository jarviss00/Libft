/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshresth <sshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:34:57 by sshresth          #+#    #+#             */
/*   Updated: 2024/03/11 13:50:44 by sshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == (char) c)
			return ((char *) &s[counter]);
		counter++;
	}
	if (s[counter] == (char) c)
		return ((char *) &s[counter]);
	return (NULL);
}
