<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 01:46:34 by bvelasco          #+#    #+#             */
/*   Updated: 2023/01/15 02:45:35 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putlnbr_base_fd(long nbr, char *base, int fd)
{
	char	*toprint;
	int		printed;

	toprint = ft_ltoi_base(nbr, base);
	printed = ft_strlen(toprint);
	write(fd, toprint, printed);
	free(toprint);
	return (printed);
=======
#include "libft.h"

int	verifyBase(char *base)
{
	char	*len;
	int		i;

	if (ft_strchr(base, '-') || ft_strchr(base, '+'))
	{
		return (0);
	}
	len = ft_strlen(base);
	i = 0;
	while (i < len)
	{
		if (ft_strrchr(base, base[i]) != (base + i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_ft(int nbr, char *base, int fd)
{
	if (!verifyBase(base))
>>>>>>> master
}
