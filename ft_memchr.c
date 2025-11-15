/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 16:46:10 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/15 11:12:46 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	ch;
	
	if(!s || n == 0)
		return (NULL);
	
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == ch)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char arr[] = "yasin hadi";
// 	char *res;

// 	res = ft_memchr(arr, 's', 12);
// 	if (res)
// 		printf("Found: %c\n", *res);
// 	else
// 		printf("Not found\n");
// }
