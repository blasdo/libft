/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bufflist_add.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:07:37 by bvelasco          #+#    #+#             */
/*   Updated: 2023/09/24 16:57:23 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	bufflist_add(t_bufflist **last, t_bufflist *new)
{
	if (!last || !new)
		return ;
	if (*last)
	{
		*last = new;
	}
	while ((*last)->next)
		(*last)->next;
	(*last)->next = new;
}
