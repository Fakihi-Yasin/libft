/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 09:45:16 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/22 11:26:52 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *d = dst;
    const unsigned char *s = src;

    while (n--)
        *d++ = *s++;
    
    return dst;
}

// int main(){
//     char s[] = "ususuusd";
//     char d[12];
//     ft_memcpy(d, s, 7);
//      d[7] = '\0'; 
//     printf("dest is %s\n", d);
// }
