/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:54:00 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/27 19:05:48 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stddef.h>
# include <stdio.h>
# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif
# ifndef INT_MIN
#  define INT_MIN -2147483648
# endif

//Evaluation Methods
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
unsigned int	ft_strlen(const char *s);
// Char manipulation Methods
int				ft_toupper(int c);
int				ft_tolower(int c);
//Control Methods
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
//Casting methods
int				ft_atoi(const char *str);
// Inicialization Methods
void			*ft_memset(void *b, int c, size_t len);
void			*ft_bzero(void *b, size_t len);
// Memory manipulation Methods
void			*ft_memcpy(void *dst, const void *src, size_t len);
#	endif
