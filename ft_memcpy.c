/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:45:16 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 00:40:01 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*ptr;
	size_t	i;

	i = 0;
	ptr = dst;
	if (dst == NULL && src == NULL)
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

// int main(){
//     char s[] = "ususuusd";
//     char d[12];
//     ft_memcpy(d, s, 0);
//      d[7] = '\0';
//     printf("dest is %s\n", d);
// }
