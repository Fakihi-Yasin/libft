/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 11:47:01 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/23 14:17:49 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    
    unsigned char *d = (unsigned char *)dst;
    unsigned char *s = (unsigned char *)src;


    if(dst == NULL || src == NULL)
        return (NULL);

    if (d > s){
        int i = len -1;
     
        while (i >= 0){
            d[i] = s[i];
            i--;
        }
}else{
    int j = 0;
    while (j < len)
    {
        d[j] = s[j];
        j++;
    }
}
return dst;
}



int main()
{
    char str1[20] = "ABCDEFG";
    char str2[20] = "1234567";

    printf("Before ft_memmove:\n");
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    // Forward copy (no overlap)
    ft_memmove(str2, str1, 5);
    printf("\nAfter ft_memmove forward (str1 -> str2):\n");
    printf("str2: %s\n", str2);

    // Backward copy (overlap)
    ft_memmove(str1 + 2, str1, 5); // move "ABCDE" 2 bytes forward
    printf("\nAfter ft_memmove backward (overlap in str1):\n");
    printf("str1: %s\n", str1);

    return 0;
}