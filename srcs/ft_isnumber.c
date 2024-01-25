/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borja <borja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 16:34:32 by borja             #+#    #+#             */
/*   Updated: 2024/01/25 18:42:56 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_isnumber(char *str, int sign)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	if (sign == 1)
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	if (i == 0)
		return (0);
	return (1);
}

