/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesprez <ndesprez@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 20:23:32 by ndesprez          #+#    #+#             */
/*   Updated: 2023/04/01 11:40:52 by ndesprez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*nxt;

	if (lst && *lst)
	{
		if ((*lst)->next)
		{
			temp = (*lst)->next;
			while (temp->next)
			{
				nxt = temp->next;
				ft_lstdelone(temp, del);
				temp = nxt;
			}
			ft_lstdelone(temp, del);
		}
		ft_lstdelone(*lst, del);
		*lst = NULL;
	}
}
