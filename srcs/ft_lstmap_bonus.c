/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borja <borja@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 01:17:35 by bvelasco          #+#    #+#             */
/*   Updated: 2024/01/23 15:41:40 by borja            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static	t_list	*cleear_content_type(t_content content, void (*del)(t_content))
{
	(*del)(content);
	return (0);
}

t_list	*ft_lstmap_type(t_list *lst, t_type type,
		t_content (*f)(t_content), void (*del)(t_content))
{
	t_list		*ret;
	t_content	tmp_content;
	int			i;

	if (!lst || !f || !del)
		return (0);
	tmp_content = (f)(lst -> content);
	ret = ft_lstnew_type(INT, tmp_content);
	if (!ret)
		return (clear_content_type(tmp_content, del));
	i = 0;
	lst = lst -> next;
	while (lst)
	{
		tmp_content = (*f)(lst -> content);
		ft_lstadd_back(&ret, (ft_lstnew_type(type, tmp_content)));
		i++;
		if (ft_lstsize(ret) != i)
		{
			ft_lstclear(&ret, del);
			return (cleear_content_type(tmp_content, del));
		}
		lst = lst -> next;
	}
	return (ret);
}
//deprecated
static t_list	*clear_content(void *content, void (*del)(void *))
{
	(*del)(content);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
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
