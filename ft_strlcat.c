/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:10:36 by bvelasco          #+#    #+#             */
/*   Updated: 2022/11/04 21:11:43 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char		*f_dst;
	const char	*f_src;

	f_dst = dst;
	f_src = (char *) src;
	while (dstsize && *f_dst)
	{
		f_dst++;
		dstsize--;
	}
	while (dstsize > 1 && *f_src)
	{
		*(f_dst++) = *(f_src++);
		dstsize--;
	}
	if (dstsize)
		*(f_dst) = 0;
	return ((size_t)(ft_strlen(src) - (f_src - src) + (f_dst - dst)));
}
