#include "libft.h"
#include <stdio.h>
size_t	get_new_len(char const *s1, char const *set)
{
	int i;
	int j;
	int to_delete;
	char *lst_to_delete;

	to_delete = 0;
	i = 0;
	j = 0;
	while (s1[i] != 0 && set[j] != 0)
	{
		j = 0;
		while (set[j] != 0 && s1[i] != set[j])
			j++;
		to_delete++;
		lst_to_delete = (char *) s1 + i;
	}
	i = ft_strlen(s1) - 1;
	while (i >= 0 && set[j] != 0 && lst_to_delete)
	{
		j = 0;
		while (set[j] != 0 && s1[i] != set[j])
			j++;
		to_delete++;
	}
	return (to_delete);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int i;
	int is_init;

	i = 0;
	is_init = 0;

	printf("%li", get_new_len(s1, set));
	return ("mayonesa");
}

int main(int argc, char *argv[])
{
	ft_strtrim(argv[1],argv[2]);
	return (0);
}
