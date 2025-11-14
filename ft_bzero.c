/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:18:21 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/13 17:53:52 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n) // size_t is an unsigned integer type
{
	char	*str;
    if (!s || n == 0 || *(char*)s == '\0')
        return;
	str = (char *)s;

	while (n > 0)
	{
		*(str++) = 0;
		n--;
	}
}