#include "libft.h"

int	verifyBase(char *base)
{
	char	*len;
	int		i;

	if (ft_strchr(base, '-') || ft_strchr(base, '+'))
	{
		return (0);
	}
	len = ft_strlen(base);
	i = 0;
	while (i < len)
	{
		if (ft_strrchr(base, base[i]) != (base + i))
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base_ft(int nbr, char *base, int fd)
{
	if (!verifyBase(base))
}
