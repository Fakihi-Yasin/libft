/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:56:55 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/16 23:13:17 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
int ft_isalnum (int x){
    if((ft_isalpha(x)) || (ft_isdigit(x)))
        return (1);
    return (0);
}


int main (){
    printf("%d\n",ft_isalnum(58));
}