/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 21:29:50 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/25 22:43:08 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_calloc(size_t count, size_t size)
{

    unsigned char *tmp;
    size_t i;
    
    i = 0;

    tmp = malloc(count * size);

    if(!tmp)
        return (NULL);
    while (i < count  * size)
    
        tmp[i] = 0;
        i++;
    return (tmp);
    
    
}