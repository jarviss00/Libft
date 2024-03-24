/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshresth <sshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:35:55 by sshresth          #+#    #+#             */
/*   Updated: 2024/03/22 13:42:38 by sshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = (int) ft_strlen(s);
	if ((char) c == '\0')
		return ((char *) s + len);
	while (len >= 0)
	{
		if (*(s + len) == (char) c)
			return ((char *) s + len);
		len--;
	}
	return (0);
}
