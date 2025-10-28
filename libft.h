/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:20:12 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/27 10:41:29 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int ft_isalpha(int x);
int ft_isdigit(int x);
int ft_isalnum(int x);
int ft_isascii(int x);
int ft_isprint(int x);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *a);
char *ft_strdup(const char *s1);
void *ft_calloc(size_t count, size_t size);


#endif