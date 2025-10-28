/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:57:01 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/27 11:38:07 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
    i = 0;
    
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start)) //&& s[start + i] = mnin tewsel '\0'  , Stops at string end, no overflow
		len = ft_strlen(s + start);
	ptr = (char *)malloc(len + 1);
	if (!ptr)
		return (NULL);
	while (i < len ) 
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
//////// 	if (len > ft_strlen(s + start))
// s + start ma kayjme3ch string,
// hiya pointer katbdé t9ra mn dak l index li 3titi.

// So if start = 5, s + 5 → tbdé t9ra mn character numéro 5 f s.