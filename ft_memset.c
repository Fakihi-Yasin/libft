
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:03:02 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/18 00:50:39 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memset(void *c, int a, size_t b){

    unsigned char * n;
    n = (unsigned*) c; //== adress c

    while (b > 0)
    {
        *(n++) = (unsigned) a;
        b--;
    }

    return c;
}

int main(){
    int x = 0;


    ft_memset(&x, 1, 3);
    ft_memset(&x, 217, 2);
    ft_memset(&x, 124, 1);

    printf("%d\n", x);
    // 1337
    // 999
    // 2001
    //121212
}