/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:18:21 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 00:49:00 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *str;
    
    str = (char *) s;
    while (n > 0)
    {
        *(str++) = 0;
         n--;
    }
}


// int main (){
//     char str[] = "yassin";
//     printf("%s\n", str);
//     ft_bzero(str, sizeof(char *));
//     printf("%s\n", str);
// }