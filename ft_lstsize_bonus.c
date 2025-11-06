/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 00:28:01 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/05 00:28:36 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list	*lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		i++;
		lst = lst -> next ;
	}
	return (i);
}