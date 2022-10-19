/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:09:05 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/19 15:30:10 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*rtn;

	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	rtn = malloc(len);
	if (rtn == 0)
		return (0);
	ft_memmove(rtn, s + start, len);
	return (rtn);
}
