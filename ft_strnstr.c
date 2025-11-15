/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:47:49 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/15 21:28:30 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *c, size_t len)
{
	size_t	i;
	size_t	j;

	if (!s || !c)
		return (NULL);
	i = 0;
	j = 0;
	if (c[0] == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] == c[j] && (i + j) < len)
		{
			j++;
			if (c[j] == '\0')
				return ((char *)&s[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char hay[] = "Hello World!";
//     char needle[] = "World";

//     // search in the first 8 chars only
//     printf("%s\n", ft_strnstr(hay, needle, 8));  // NULL (not found)

//     // search in the first 12 chars
//     printf("%s\n", ft_strnstr(hay, needle, 12)); // "World!"
// }
