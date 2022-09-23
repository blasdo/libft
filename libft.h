/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:54:00 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/20 19:44:37 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#	define LIBFT_H
#include <stddef.h>
#include <stdio.h>
//Evaluation Methods
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
// Char manipulation Methods
int ft_toupper(int c);
int ft_tolower(int c);

//Control Methods
unsigned int ft_strlen(const char *s);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
// Inicialization Methods
void *ft_memset(void *b, int c, size_t len);
void *ft_bzero(void *b, size_t len);
// Memory manipulation Methods
void *ft_memcpy(void *dst, const void *src, size_t len);
#	endif
