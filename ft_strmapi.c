/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:53:20 by marvin            #+#    #+#             */
/*   Updated: 2025/10/29 14:53:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    int i;
    unsigned *p;
    unsigned len;

    i = 0;
    if(s == NULL || f == NULL){
        return(NULL);
    }
    len = (ft_strlen(s));
    p = (char *)malloc((len + 1) * sizeof(char));
    if(!p)
        return (NULL)l
    while(i < len && (char)s[i]){
        p[i] = f(i, s[i]);
        i++;
    }
    p[i] = 0;
    return (p);
}