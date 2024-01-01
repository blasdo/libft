#include <libft.h>

int	ft_isnumber(char *str, int sign)
{
	int i;

	if (!str)
		return (0);
	i = 0;
	if (sign == 1)
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
	}
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			i++;
		else
			return (0);
	}
	if (i == 0)
		return (0);
	return (1);
}
