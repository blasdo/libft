/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inicialization_methods.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:21:00 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/16 15:20:55 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int		i;
	char	*bchar;

	bchar = (char *) b;
	i = 0;
	while (i < len)
		bchar[i++] = (unsigned char) c;
	return (b);
}

void	*ft_bzero(void *b, size_t len)
{
	int		i;
	char	*bchar;

	bchar = (char *) b;
	i = 0;
	while (i < len)
		bchar[i++] = '\0';
	return (b);
}
