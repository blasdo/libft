/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 17:38:57 by bvelasco          #+#    #+#             */
/*   Updated: 2022/11/03 23:19:56 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*o_src;

	o_src = (char *)src;
	while (dstsize > 1 && *src)
	{
		*(dst++) = *(src++);
		dstsize--;
	}
	if (dstsize > 0)
		*dst = 0;
	return ((size_t) ft_strlen(o_src));
}
