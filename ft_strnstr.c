/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 20:17:06 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/04 14:16:31 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *) haystack);
	while ((haystack[i] != 0) && (i < len))
	{
		if ((haystack[i] == needle[j]) && (needle[j] != 0))
		{
			if (needle[j + 1] == 0)
				return ((char *)(haystack + (i - j)));
			j++;
		}
		else
			j = 0;
		i++;
	}
	return (0);
}
