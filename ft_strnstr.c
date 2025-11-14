/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 22:47:49 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 00:48:19 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
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
