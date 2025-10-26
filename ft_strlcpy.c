/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:03:02 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/20 18:23:59 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  src_len;
    size_t i;
    src_len = ft_strlen(src);
    
    if(dstsize == 0)
        return (src_len);   
    i = 0;
    while (src[i] && i< dstsize-1)
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}

int main (void){
    char dst[10];
    char *src = "jhjhjh";
    size_t len = ft_strlcpy(dst, src, sizeof(dst));
      printf("Copied: %s\n", dst);
    printf("Source length: %zu\n", len);
    return 0;
    
}