/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 00:23:28 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/06 23:18:27 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_ofint(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	else if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	v_absolut(int n, int *sign)
{
	if (n >= 0)
		return (n);
	else
	{
		*sign = 0;
		return (n * (-1));
	}
}

static void	f_stoc(char *p, int len, int *sign, int n)
{
	if (*sign == 0)
	{
		p[0] = '-';
	}
	p[len] = 0;
	while (--len >= 0)
	{
		if (len == 0 && !*sign)
			break ;
		p[len] = n % 10 + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*p;
	int		len;
	int		sign;

	sign = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = len_ofint(n);
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	n = v_absolut(n, &sign);
	f_stoc(p, len, &sign, n);
	return (p);
}
