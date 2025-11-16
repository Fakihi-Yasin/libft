/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:42:23 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/16 11:57:42 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (!dest && destsize == 0)
		return (ft_strlen(src));
	if (destsize <= dest_len)
		return (destsize + src_len);
	i = dest_len;
	j = 0;
	while (i < destsize - 1 && src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest_len + src_len);
}

// int main() {
// 	char dest[20] = "y";
//     const char *src = "hello world";
//     ft_strlcat(dest, src, 8);
//     printf("dest: %s\n", dest);
//     printf("%zu",  ft_strlcat(dest, src, 13));
//     return 0;
// }