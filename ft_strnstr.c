/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:18:44 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/05 17:15:56 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0 || needle == 0)
		return((char *) haystack);
	while( i < len && *haystack != 0)
	{
		if (*haystack == *needle)
		{
			int j = 0;
			while (*(haystack + j) == needle[j] && needle[j] != 0)
				
		}
		haystack++;
	}
	return (0);
}
