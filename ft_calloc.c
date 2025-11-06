/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:29:50 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 00:49:27 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if ((int) count < 0 || (int) size < 0)
		return (NULL);
	p = malloc(count * size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return (p);
}

// malloc → OS heap manager kayallocate exact memory li tlabt

// bzero → katclear content li garbage f memory

// pointer → give address l CPU / program bach t9der t5dm 3lih
//////heap = big warehouse. malloc = reserving exact number of shelves. bzero = cleaning shelves before use.//////////////////