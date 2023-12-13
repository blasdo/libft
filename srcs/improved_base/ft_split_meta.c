/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_meta.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:45:37 by bvelasco          #+#    #+#             */
/*   Updated: 2023/12/13 12:53:06 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char	**clear_split(char **to_clean)
{
	ft_free_ptr_array((void **) to_clean);
	return (0);
}

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	in_word;
	int	now;

	now = 0;
	i = 0;
	in_word = 0;
	while (s[i] != 0)
	{
		if (!in_word && s[i] != c)
		{
			in_word = 1;
			now++;
		}
		else if (in_word && s[i] == c)
			in_word = 0;
		i++;
	}
	return (now);
}

t_split	*ft_split(char const *string, char delim)
{
	int		i;
	t_split	*rtn;

	rtn = malloc(sizeof(t_split));
	if (!rtn)
		return (0);
	rtn->words = count_words(string, delim);
	rtn->splitted = malloc(rtn->words + 1);
	if (!(rtn->splitted))
		return (0);
	return (rtn);
}
