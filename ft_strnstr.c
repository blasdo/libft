/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 14:18:44 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/05 15:37:19 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (len + 1 == 0)
		return (0);
	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0 || needle == 0)
		return((char *) haystack);
	while( i < len && *haystack != 0)
	{
		if (*haystack == needle[j])
		{
			if(needle[j + 1] == 0)
				return ((char *) haystack - j);
			j++;
		}
		else
			j = 0;
		i++;
		haystack++;
	}
	return (0);
}
