/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 18:50:40 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/01 19:01:54 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	if (c == 0)
		return ((char *) (s + ft_strlen(s)));
	while (s[i] != 0)
	{
		if ((int) s[i] == c)
		{
			return ((char *) (s + i));
		}
		i++;
	}
	return (0);
}
