/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 21:33:27 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/10 18:33:17 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>

// int main(void)
// {
//     char s1[] = "ABC";
//     char s2[] = "ABD";

//     printf("%d\n", ft_memcmp(s1, s2, 3)); 
//     printf("%d\n", ft_memcmp(s1, s1, 3)); 
//     printf("%d\n", ft_memcmp(s2, s1, 3)); 
// }
