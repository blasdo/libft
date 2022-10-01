/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:50:35 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/01 13:50:37 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *b, size_t len)
{
	int		i;
	char	*bchar;

	bchar = (char *) b;
	i = 0;
	while (i < len)
		bchar[i++] = 0;
	return (b);
}
