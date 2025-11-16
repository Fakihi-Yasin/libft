/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:18:21 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/16 13:04:55 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*str;

	if (!s || n <= 0)
		return ;
	str = (char *)s;
	while (n > 0)
	{
		*(str++) = 0;
		n--;
	}
}

// int main() {
//     char str[10] = "hello world!";
//     ft_bzero(str, 5);
//     printf("%s", str);
//     return 0;
// }