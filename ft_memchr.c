/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:44:17 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/02 11:48:43 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*c_s;

	i = 0;
	c_s = (char *) s;
	while (i < n)
	{
		if ((c) == c_s[i])
		{
			return ((void *)s + i);
		}
		i++;
	}
	return (0);
}
