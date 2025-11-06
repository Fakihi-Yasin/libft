/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:47:01 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 00:40:22 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst > src)
	{
		while (len--)
			*((char *)dst + len) = *((char *)src + len);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}