/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:45:16 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/13 04:49:09 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = dst;
	if (dst == NULL || src == NULL)
		return (NULL);
	while (i < n)
	{
		*((unsigned char *)dst) = *((unsigned char *)src);
		i++;
		src++;
		dst++;
	}
	return (ptr);
}


// int main(void)
// {
// 	char src[] = "Hello, world!";
// 	char dest[20];

// 	// Copy 13 characters + '\0'
// 	ft_memcpy(dest, src, 14);

// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);

// 	// Test 2: Copy partial
// 	char part[6];
// 	ft_memcpy(part, src, 5);
// 	part[5] = '\0';
// 	printf("Partial copy: %s\n", part);

// 	// Test 3: Overlapping (undefined behavior)
// 	// Demonstrates why memmove exists
// 	char overlap[] = "123456789";
// 	ft_memcpy(overlap + 2, overlap, 5); // dangerous
// 	printf("Overlap test (undefined): %s\n", overlap);

// 	return 0;
// }