/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 09:04:33 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/15 22:02:57 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	c_char;
	char	*searchchar;

	if (!s)
		return (NULL);
	i = 0;
	searchchar = NULL;
	c_char = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c_char)
			searchchar = (char *)&s[i];
		i++;
	}
// check for '\0'
	if (s[i] == c_char)
		searchchar = (char *)&s[i];
	return (searchchar);
}

// int main(void)
// {
//     char str[] = "banana";
//     char *p;

//     p = ft_strrchr(str, 'a');  
//     printf("%s\n", p);         

//     p = ft_strrchr(str, 'z');  
//     printf("%p\n", p);         

//     p = ft_strrchr(str, '\0'); 
//     printf("%s\n", p);      
// }
