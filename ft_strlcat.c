/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 18:42:23 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/20 19:05:59 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i = 0;
    size_t lensrc = ft_strlen(src);
    size_t lendst = ft_strlen(dst);

    if(dstsize < lendst)
        return dstsize + lensrc;
        
    while (dst[i] != '\0' && i < dstsize)
    {
        dst[lendst +1] = src[i];
    }
    dst[lendst] = '\0';

    return lendst + lensrc;
}