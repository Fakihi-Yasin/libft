/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 22:37:03 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 00:47:10 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    int i = 0;
   

    while (s[i] && s[i] != (char)c)
        i++;
    
    if( s[i] == (char) c )
        return ((char *)s + i); // hna bach ghan3erfo ayticrimenta
    
    return NULL;
}
// int main() {
//     char str[] = "salam aalikom";
//     char *p = ft_strchr(str, ' ');
//        printf("%s\n", p);  
// }
