/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:43:43 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/13 06:35:30 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i; 			// index to traverse the string
	int				sign;		// to save the sign of the number
	unsigned long 	result; 	// save to theme values // insigned long to aviod overflow // 8 baytes in - 64bits

	if (!str|| str[0] == '\0') 	// protect against null pointer
		return 0;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) // skip whitespace characters
		i++;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;

	// "1234abc" -> 1234
	//10 + 2 = 12
	//12 * 10 + 3 = 123
	//123 * 10 + 4 = 1234

	while (ft_isdigit(str[i]))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}