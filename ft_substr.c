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

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	slen;
	size_t	finish;

	if (!s)
		return (0);
	slen = ft_strlen(s);
	if (start >= slen)
	{
		new = (char *)malloc(sizeof(char) * 1);
		if (!new)
			return (0);
		new[0] = '\0';
		return (new);
	}
	finish = 0;
	if (start < slen)
		finish = slen - start;
	if (finish > len)
		finish = len;
	new = (char *)malloc(sizeof(char) * (finish + 1));
	if (!new)
		return (0);
	ft_strlcpy(new, s + start, finish + 1);
	return (new);
}
//////// 	if (len > ft_strlen(s + start))
// s + start ma kayjme3ch string,
// hiya pointer katbdé t9ra mn dak l index li 3titi.

// So if start = 5, s + 5 → tbdé t9ra mn character numéro 5 f s.