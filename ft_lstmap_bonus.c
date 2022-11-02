/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:17:35 by bvelasco          #+#    #+#             */
/*   Updated: 2022/11/02 03:11:03 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{	
	t_list	**ret;
	t_list	*tmp;
	int		i;

	if (!lst || !f || !del)
		return (0);
	tmp = ft_lstnew((f)(lst -> content));
	ret = &tmp;
	if (!tmp)
		return (0);
	lst = lst -> next;
	i = 1;
	while (lst)
	{
		ft_lstadd_back(ret, (ft_lstnew((*f)(lst -> content))));
		i++;
		if (ft_lstsize(*ret) != i)
		{
			ft_lstclear(ret, del);
			return (0);
		}
		lst = lst -> next;
	}
	return (*ret);
}
