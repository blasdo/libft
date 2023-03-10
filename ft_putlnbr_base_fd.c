/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:46:34 by bvelasco          #+#    #+#             */
/*   Updated: 2023/01/19 18:39:34 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putlnbr_base_fd(long long nbr, char *base, int fd)
{
	char	*toprint;
	int		printed;

	toprint = ft_ltoa_base(nbr, base);
	printed = ft_strlen(toprint);
	write(fd, toprint, printed);
	free(toprint);
	return (printed);
}
