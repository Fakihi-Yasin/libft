/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:06:14 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/01 09:36:05 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static size_t  c_words(const char *s, char c)
{
    size_t i;
    int count;
    count = 0;
    while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
    return count;
}


    int main(void)
{
    char *s = "Hello rerg gre erg";
    char c = ' ';
    int res;

    res = c_words(s,c);
    printf("Result: %d\n", res);

    return 0;
}