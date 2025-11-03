/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:06:14 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/03 00:11:38 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int     ft_strncmp(const char *s1, const char *s2, size_t n);


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
static size_t word_len(const char *s, char c)
{
    int len = 0;

    while (*s != c && *s != '\0')
    {
        len++;
        s++;
    }
    return len;
}

static size_t word_len(const char *s, char c)
{
    int len;

    len = 0;
    while (*s != c && *s != '\0'){
			len++;
            s++;
    }
  return len;
}

static char *cr_string(const char *s, char c)
{
    int len = word_len(s, c);
    char *word = malloc(len + 1);
    int i;

    if (!word)
        return NULL;
    i = 0;
    while (i < len)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return word;
}
// static char *cr_string(const char *s, char c)
// {
//     int len = c_words(s,c);
//     char *word = malloc(len + 1);
//     int i;

//     i = 0;
//     if(!word)
//         return NULL;
//     while (i < 0)
//     {
//         word[i] = s[i];
//         i++;
//     }
//     word[i] = '\0';
//     return word;
// }


static void	free_all(char **ptr)
{
	size_t	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;

	if (!s)
		return (NULL);
	tab = (char **)malloc((c_words(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			tab[i] = cr_string(s, c);
			if (!tab[i])
				return (free_all(tab), NULL);
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	tab[i] = NULL;
	return (tab);
}



int	main(void)
{
	char	*s1;
	char	**s3;
	int		i;

	s1 = "   12345 123456    1234567   12      ";
	s3 = ft_split("   12345 123456    1234567   12      ", ' ');
	printf("s3 : %s\n", s3[0]);
	printf("%d\n", ft_strncmp(s3[0], "12345", 5));
	if (s3[4] != NULL || ft_strncmp(s3[0], "12345", 5) != 0 || ft_strncmp(s3[1],
			"123456", 6) != 0 || ft_strncmp(s3[2], "1234567", 7) != 0
		|| ft_strncmp(s3[3], "12", 2) != 0 || s3[0][5] != '\0'
		|| s3[1][6] != '\0' || s3[2][7] != '\0' || s3[3][2] != '\0'
		|| s3[4] != NULL || ft_split("", '\0')[0] != NULL || ft_split("1",
			'\0')[0][0] != '1' || ft_split("1", '\0')[0][1] != '\0'
		|| ft_split("", '1')[0] != NULL || ft_split("12", '\0')[0][2] != '\0'
		|| ft_split("ABC", 'E')[0][2] != 'C')
	{
		printf("Error in ft_split Function ❌\n");
	}
	else
	{
		printf("ft_split Function is Correct ✅\n");
	}
	i = 0;
	while (s3[i] != NULL)
	{
		free(s3[i]);
		i++;
	}
	free(s3);
}

//     int main(void)
// {
//     char *s = "Hello rerg gre erg";
//     char c = ' ';
//     int res;

//     res = c_words(s,c);
//     printf("Result: %d\n", res);

//     return 0;
// }



// int main(void)
// {
//     printf("%zu\n", word_len("hello world", ' ')); // 5
//     printf("%zu\n", word_len("  leading", ' '));   // 0 (start is delimiter)
//     printf("%zu\n", word_len("a", ' '));           // 1
//     printf("%zu\n", word_len("", ' '));            // 00
//     return 0;
// }
