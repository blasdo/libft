/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 13:31:18 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/01 13:31:20 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	clean_str(const char **str)
{
	int	sign;

	sign = 0;
	while (**str != 0)
	{
		if (**str >= '0' && **str <= '9')
			break ;
		else if (**str != ' ' && **str != '\t' && **str != '\n')
		{
			if (**str != '\v' && **str != '\f' && **str != '\r')
				break ;
		}
		*str = *str + 1;
	}
	if (**str == '-')
	{
		*str = *str + 1;
		return (1);
	}
	else
		if (**str == '+')
			*str = *str + 1;
	return (0);
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
