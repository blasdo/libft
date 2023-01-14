/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:47:41 by bvelasco          #+#    #+#             */
/*   Updated: 2023/01/14 22:32:41 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numlen_base(long lnbr, size_t base_len)
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
	int		base_len;
	char	*ret;
	int		index;

	base_len = ft_strlen(base);
	index = ft_numlen_base(lnbr, base_len);
	ret = malloc(index + 1);
	if (!ret)
		return (0);
	if (lnbr < 0)
		ret[0] = '-';
	if (lnbr == 0)
		ret[0] = '0';
	ret[index--] = 0;
	while (lnbr)
	{
		if (lnbr > 0)
			ret[index--] = base[lnbr % base_len];
		if (lnbr < 0)
			ret[index--] = base[lnbr % base_len];
		lnbr /= base_len;
	}
	return (ret);
}
