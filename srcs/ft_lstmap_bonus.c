/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:17:35 by bvelasco          #+#    #+#             */
/*   Updated: 2023/09/24 01:37:20 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static t_list	*clear_content(void *content, void (*del)(void *))
{
	(*del)(content);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	const t_list	*ret;
	t_content		tmp_content;
	int				i;

	if (!lst || !f || !del)
		return (0);
	tmp_content.ptr = (f)(lst -> content.ptr);
	ret = ft_lstnew(tmp_content.ptr);
	if (!ret)
		return (clear_content(tmp_content.ptr, del));
	i = 1;
	lst = lst -> next;
	while (lst)
	{
		tmp_content.ptr = (*f)(lst -> content.ptr);
		ft_lstadd_back((t_list **)&ret, (ft_lstnew(tmp_content.ptr)));
		i++;
		if (ft_lstsize((t_list *)ret) != i)
		{
			ft_lstclear((t_list **)&ret, del);
			return (clear_content(tmp_content.ptr, del));
		}
		lst = lst -> next;
	}
	return ((t_list *)ret);
}
