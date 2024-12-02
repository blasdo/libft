#include "include/libft.h"
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);
	char *line;

	while (line = get_next_line(fd))
	{
		printf("%s", line);
		free(line);
	}
}

