#include <libft.h>

static int	check_overflow(char *str)
{
	const char		*max = ft_itoa(INT_MAX);
	const char		*min = ft_itoa(INT_MIN);

	if (ft_strlen(max) == 0 || ft_strlen(min) == 0)
		return (0);
	if (str[0] == '-')
	{
		if (ft_strlen(str) > ft_strlen(min))
			return (0);
		if (ft_strlen(str) == ft_strlen(min))
		{
			if (ft_strncmp(min, str, ft_strlen(str)) < 0)
				return (0);
		}
	}
	else if (ft_strlen(str) > ft_strlen(max))
		return (0);
	else if (ft_strlen(str) == ft_strlen(max))
	{
		if (ft_strncmp(max, str, ft_strlen(max)) < 0)
			return (0);
	}
	free((void *) max);
	free((void *) min);
	return (1);
}

int	ft_isinteger(char *str)
{
	if (ft_isnumber(str, 1) && check_overflow(str))
		return (1);
	else
		return (0);
}
