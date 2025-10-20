
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

void *ft_memset(void *b, int c, size_t len){

    unsigned char * n;
    n = (unsigned*) b; //== adress c

{    while (len > 0)
    *(n++) = (unsigned) c;
    len--;
}
return b;
    
}

/////////     test   -1337