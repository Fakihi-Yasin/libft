/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yafakihi <yafakihi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 18:20:12 by yafakihi          #+#    #+#             */
/*   Updated: 2025/10/20 06:16:43 by yafakihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

int ft_isalpha(int x);
int ft_isdigit(int x);
int ft_isalnum(int x);
int ft_isascii(int x);
int ft_isprint(int x);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
size_t ft_strlen(const char *a);


#endif