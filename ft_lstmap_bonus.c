/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:38:37 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 15:38:42 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*p;
	void	*cont;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	head = NULL;
	while (lst)
	{
		cont = f(lst->content);
		p = ft_lstnew(cont);
		if (!p)
		{
			del(cont);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, p);
		lst = lst->next;
	}
	return (head);
}