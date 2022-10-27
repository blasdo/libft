/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvelasco <bvelasco@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:44:33 by bvelasco          #+#    #+#             */
/*   Updated: 2022/10/27 14:33:21 by bvelasco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//STR
// &asd0
// &asf0
// &asd0
// 0
static void clear(***to_clear)
{
	while (**to_clean != 0)
	{
		free(*(to_clean++));
	}
	to_clean = 0;
}
static void increase_len(char ***to_increaase_len, char value)
{
	char	**tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while(*to_increase[i] != 0)
	{
		*to_increase[i++];
	}
	i++;
	tmp = malloc(i + 2);
	while(j < i)
	{
		tmp[j] = *to_increase[j];
	}
	free(*to_increase);
	*to_increase = temp;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	*word_ptrs[2];
	int		len;
	char	**rtn;

	i = 0;
	j = 1;
	rtn = calloc;
	if (rtn = 0)
		to_clean(&rtn);
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			word_ptrs[0] = (char *) s + i;
			word_ptrs[1] = ft_strchr(c);
			if (word_ptrs[1] == 0)
				len = ft_strlen(word_str);
			else
				len = (word_ptrs[1] - word_ptrs[2]) / sizeof(char);
			i + len;
		}
		else
			i++;
}
