/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 08:08:06 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/12 20:57:56 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int main(void)
// {
//     printf("%d\n", ft_strncmp("Hello", "Hello", 5)); // 0 (pareils)
//     printf("%d\n", ft_strncmp("Hello", "Helli", 5)); // >0 ('o' > 'i')
//     printf("%d\n", ft_strncmp("Hell", "Hello", 5));  // <0 ('\0' < 'o')
//     printf("%d\n", ft_strncmp("Hello", "Hi", 1));
// 0 (seulement 1 char: 'H' == 'H')
// }
