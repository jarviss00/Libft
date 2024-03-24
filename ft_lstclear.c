/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshresth <sshresth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 14:22:13 by sshresth          #+#    #+#             */
/*   Updated: 2024/03/23 15:14:57 by sshresth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*traverse;
	t_list	*temp;

	traverse = *lst;
	while (traverse)
	{
		temp = traverse->next;
		ft_lstdelone(traverse, del);
		traverse = temp;
	}
	*lst = NULL;
}
