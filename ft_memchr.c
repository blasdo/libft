/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:21:59 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/07 18:22:56 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	t_uc	*c_s;
	t_uc	c_c;

	i = 0;
	c_s = (t_uc *) s;
	c_c = (t_uc) c;
	while (i < n)
	{
		if (*(c_s + i) == c_c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
