/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 19:03:02 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/10 17:02:12 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main(void)
// {
// 	char str[10] = "abcdefghi";
// 	ft_memset(str + 3, 'x', 4);
// 	printf("%s\n", str);
// 	return 0;
// }
