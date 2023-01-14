/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:47:41 by bvelasco          #+#    #+#             */
/*   Updated: 2023/01/14 17:01:29 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_numlen_base(long lnbr, size_t base_len)
{
	int	i;

	i = 0;
	if (lnbr < 0)
		i = 1;
	if (lnbr == 0)
		return (1);
	while (lnbr)
	{
		lnbr /= base_len;
		i++;
	}
	return (i);
}

char	*ft_ltoa_base(long lnbr, char *base)
{

}
