/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:44:33 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/29 20:29:30 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	in_word;
	int now;

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
	return(now);
}
static size_t	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (ft_strchr(s,c) && s[i])
		i++;
	return (i);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		indx;
	int		now;
	int		low;
	char	**rtn;

	i = 0;
	indx = 0;
	now = count_words(s, c);
	rtn = malloc((now + 1) * sizeof(char *));
	while (i < now)
	{
		low = word_len(s, c);
		rtn[i] = ft_substr(s,0,low);
		s += low;
		i++;
	}
	rtn[i] = 0;
	return (rtn);
}

#include <stdio.h>
int main(int argc, char *argv[])
{
	int		i;
	char	**split;

	split = ft_split(argv[1], argv[2][0]);
	while (split[i])
	{
		printf("%s\n", split[i++]);
	}
	return (0);
}
