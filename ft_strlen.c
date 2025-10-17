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

size_t ft_strlen(const char *a){
    size_t i = 0;
    while (a[i])
    i++;
    return(i);   
}

// int main (){
//     printf("%zu\n", ft_strlen("   "));
//     printf("%zu\n", ft_strlen("eeee"));
//     printf("%zu\n", ft_strlen(",e ,  eeeaa3"));
// }