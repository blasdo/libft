/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:06:00 by bvelasco          #+#    #+#             */
/*   Updated: 2022/11/03 14:20:35 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t o_dstsize;
	size_t size_of_cat;

	o_dstsize = ft_strlen(dst);
	size_of_cat = ft_strlcpy(dst + o_dstsize, src, dstsize - ft_strlen(dst));
	return (ft_strlen(src) - size_of_cat);
}
