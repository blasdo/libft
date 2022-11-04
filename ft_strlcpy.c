/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 21:12:01 by bvelasco          #+#    #+#             */
/*   Updated: 2022/11/04 21:12:13 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char	*f_dst;
	char	*f_src;

	f_dst = dst;
	f_src = (char *) src;
	while (dstsize > 1 && *f_src)
	{
		*(f_dst++) = *(f_src++);
		dstsize--;
	}
	if (dstsize)
		*f_dst = 0;
	return (ft_strlen(src));
}
