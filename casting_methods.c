/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   casting_methods.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 18:36:13 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/28 14:54:34 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int clean_str(const char **str)
{
	int sign;

	sign = 0;
	while (**str != 0)
	{
		if (**str >= '0' && **str <= '9')
			break;
		else if (**str == '-')
			sign++;
		*str = *str + 1;
	}
	if (sign % 2 == 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(const char *str)
{
	int			res;
	char		sign;

	sign = clean_str(&str);
	res = 0;
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
