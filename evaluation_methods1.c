/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluation_methods1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:56:10 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/19 18:29:49 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != 0)
		i++;
	return i;
}

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] != 0 && s1[0] != 0) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	return (ft_strncmp((const char *) s1, (const char *) s2, n));
}
