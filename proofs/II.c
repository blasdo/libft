#include <stdio.h>
#include "../libft.h"

//Shows you the content of the memory (in binary)
char *Memory_Str(void *memory, int nob)
{
	int		i;
	unsigned char	*current_byte;
	int		buffsize;
	char	*rtn;
	char	tmp_memory[9];

	i = 0;
	current_byte = memory;
	buffsize = (nob*8) + (nob);
	rtn = malloc(buffsize);
	while (((void *)current_byte) - memory < nob)
	{
		while ( i < 8)
		{
			tmp_memory[7 - i] = (*current_byte%2) + '0';
			*current_byte /= 2;
			i++;
		}
		ft_strlcat(rtn, tmp_memory, buffsize);
		ft_strlcat(rtn, " ", buffsize);
		current_byte++;
		i++;
	}
	return(rtn);
}

int main()
{
	float flex;
	float cflex;
	unsigned int   wn;
	void *wtf;
	char *to_show;

	flex = 24.03;
	cflex = flex;
	to_show = Memory_Str(&flex, sizeof(float));
	printf("%s\n", to_show);
	mw
	wn = 2391707278;
	wtf = &wn;
	printf("%f, %f \n", cflex, *((float *)wtf)); 
	free(to_show);
	return (0);
}
