/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshresth <sshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:06:15 by sshresth          #+#    #+#             */
/*   Updated: 2024/03/23 14:16:14 by sshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*traverse;

	if (!lst)
		return (NULL);
	traverse = lst;
	while (traverse->next)
		traverse = traverse->next;
	return (traverse);
}
