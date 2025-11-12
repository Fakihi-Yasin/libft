/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:29:50 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/09 18:57:38 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size && count > __SIZE_MAX__ / size)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (count * size));
	return (p);
}

int	main(void)
{
	int	*ptr;

	ptr = (int *)ft_calloc(0, sizeof(int));
	if (ptr == NULL)
	{
		printf("Error in ft_calloc Function ❌\n");
	}
	else
	{
		printf("ft_calloc Function is Correct ✅\n");
		free(ptr);
	}
}

// malloc → OS heap manager kayallocate exact memory li tlabt

// bzero → katclear content li garbage f memory

// pointer → give address l CPU / program bach t9der t5dm 3lih
//////heap = big warehouse. malloc = reserving exact number of shelves. bzero = cleaning shelves before use.//////////////////