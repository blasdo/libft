#include "libft.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc != 3)
		return (-1);
	printf("%s",ft_strjoin(argv[1],argv[2]));
}
