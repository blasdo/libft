/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting_methods.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:36:13 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/27 19:26:18 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			res;
	char		sign;

	sign = 0;
	res = 0;
	if (*str == '-')
		sign = *(str++) - 054;
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			if (sign == 0 && ((res * 10 + (*str - '0')) <= INT_MAX))
				res = res * 10 + (*str - '0');
			else if ((res * 10 - (*str - '0')) >= INT_MIN)
				res = res * 10 - (*str - '0');
			str++;
		}
		else
			break ;
	}
	return (res);
}
