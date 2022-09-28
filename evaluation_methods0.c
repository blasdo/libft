/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evaluation_methods.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:52:22 by bvelasco          #+#    #+#             */
/*   Updated: 2022/09/19 12:35:02 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c >= 0 && c <= 255) || c == EOF))
		return (0);
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	if (!((c >= 0 && c <= 255) || c == EOF))
		return (0);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	if (!((c >= 0 && c <= 255) || c == EOF))
		return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 0177)
		return (1);
	return (0);
}

int	ft_isprint(int c)
{
	if (!((c >= 0 && c <= 255) || c == EOF))
		return (0);
	if (c >= 040 && c <= 0176)
		return (1);
	return (0);
}
