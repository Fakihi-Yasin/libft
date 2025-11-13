/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 09:06:14 by yafakihi          #+#    #+#             */
/*   Updated: 2025/11/12 20:49:08 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strncmp(const char *s1, const char *s2, size_t n);

static size_t	c_words(const char *s, char c)
{
	int	count;

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
	return (count);
}

static size_t	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static char	*cr_string(const char *s, char c)
{
	int		len;
	char	*word;
	int		i;

	len = word_len(s, c);
	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

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

// int main(void)
// {
//     char **words = ft_split("  hakf net sad  ", ' ');
//     int i = 0;

//     while (words && words[i])
//     {
//         printf("[%s]\n", words[i]);
//         i++;
//     }

//     free_all(words);
// }

//     int main(void)
// {
//     char *s = "Hello rerg gre erg";
//     char c = ' ';
//     int res;

//     res = c_words(s,c);
//     printf("Result: %d\n", res);

//     return (0);
// }

// int main(void)
// {
//     printf("%zu\n", word_len("hello world", ' ')); // 5
//     printf("%zu\n", word_len("  leading", ' '));   // 0
//     printf("%zu\n", word_len("a", ' '));           // 1
//     printf("%zu\n", word_len("", ' '));            // 0
//     return (0);
// }
