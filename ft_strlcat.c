/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:06:00 by bvelasco          #+#    #+#             */
/*   Updated: 2022/11/03 16:32:04 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dstend;
	char	*lstcpy;
	size_t	original_size;

	dstend = dst;
	lstcpy = (char *)src;
	while (dstsize && *dstend)
	{
		dstend++;
		dstsize--;
	}
	original_size = (dstend - dst);
	while (dstsize > 1 && *lstcpy != 0)
	{
		*(dstend++) = *(lstcpy++);
		dstsize--;
	}
	if (dstsize)
		*(dstend) = 0;
	return (original_size + (size_t)ft_strlen(src));
}
