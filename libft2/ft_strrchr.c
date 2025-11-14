/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:04:33 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/07 15:59:12 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_char;
	char	*searchchar;

	i = 0;
	searchchar = NULL;
	c_char = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c_char)
			searchchar = (char *)&s[i];
		i++;
	}
	if (s[i] == c_char)
		searchchar = (char *)&s[i];
	return (searchchar);
}

// int main(void)
// {
//     char str[] = "banana";
//     char *p;

//     p = ft_strrchr(str, 'a');  // should return last 'a'
//     printf("%s\n", p);         // prints "a""

//     p = ft_strrchr(str, 'z');  // not found
//     printf("%p\n", p);         // prints 0 / NULL

//     p = ft_strrchr(str, '\0'); // null terminator
//     printf("%s\n", p);         // prints "" (empty string)
// }
