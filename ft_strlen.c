/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:03:02 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/15 09:52:15 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *a)
{
	size_t	i;
	if(!a)
		return(0);
	i = 0;
	while (a[i])
		i++;
	return (i);
}

// int main (){
//     printf("%zu\n", ft_strlen("   "));
//     printf("%zu\n", ft_strlen("eeee"));
//     printf("%zu\n", ft_strlen(",e ,  eeeaa3"));
// }