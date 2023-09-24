/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bufflist_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:00:48 by bvelasco          #+#    #+#             */
/*   Updated: 2023/09/24 18:17:48 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_bufflist	*bufflist_new(int fd)
{
	t_bufflist	*tortn;

	tortn = malloc(sizeof(bufflist));
	if (!tortn)
		return (0);
	tortn->readrtn = read(fd, tortn->buff, BUFFER_SIZE);
	if (readrtn < 0)
	{
		free(tortn);
		return (0);
	}
	to_rtn->next = 0;
	return (tortn);
}
