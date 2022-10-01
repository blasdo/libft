#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c >= 0 && c <= 255) || c == EOF))
		return (0);
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
