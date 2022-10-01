/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluation_methods1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:56:10 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/30 23:13:04 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while ((s1[i] != 0 || s2[i] != 0) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*c_s1;
	char	*c_s2;

	c_s1 = (char *) s1;
	c_s2 = (char *) s2;
	i = 0;
	while (i < n)
	{
		if (c_s1[i] != c_s2[i])
		{
			return ((unsigned char) c_s1[i] - (unsigned char) c_s2[i]);
		}
		i++;
	}
	return (0);
}

unsigned int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != 0)
		i++;
	return (i);
}
