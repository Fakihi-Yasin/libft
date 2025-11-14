/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:06:14 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/13 05:21:51 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	i;

	dest = (char *)malloc(ft_strlen(s1) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

// How it works step-by-step:

//1  Count the length of the original string s
// → with ft_strlen(s)
// (so we know how many bytes we need).

//1  Allocate memory big enough to hold the copy + '\0'
// → malloc(len + 1)

// 3 Copy characters one by one from s to the new string.

// 4 Add '\0' at the end.

//5  Return the pointer to the new duplicated string.

// int main()
// {
//     char str[] = "hello";
//     char *dup = ft_strdup(str);

//     printf("Original: %s\n", str);
//     printf("Duplicate: %s\n", dup);

//     free(dup);
// }

// #include <stdio.h>

// int main(void)
// {
//     char *original = "Raja";
//     char *copy = ft_strdup(original);

//     printf("Original: %s\n", original);
//     printf("Copy: %s\n", copy);

//     copy[0] = 'M';  // modify copy
//     printf("After change -> Original: %s | Copy: %s\n", original, copy);

//     free(copy); // prevent memory leak
// }
