/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:42:23 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/15 19:59:22 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;
	size_t	l_retu;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dstsize >= d_len)
		l_retu = s_len + d_len;
	else
		l_retu = s_len + dstsize;
	if (dstsize == 0 || !dst)
		return (l_retu);
	while (src[i] != '\0' && d_len < dstsize - 1)
	{
		dst[d_len] = src[i];
		i++;
		d_len++;
	}
	dst[d_len] = '\0';
	return (l_retu);
}

// int main() {
// 	char dest[20] = "";
//     const char *src = "hello world";
//     ft_strlcat(dest, src, 12);
//     printf("dest: %s\n", dest);
//     printf("%zu",  ft_strlcat(dest, src, 11));
//     return 0;
// }