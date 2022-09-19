// this is a test main, his function it's test all the methods of the library, when the library is ended, the main will be deleted
// This main doesn't pass the norme
#include "libft.h"
#include <stdio.h>
#include <string.h>
/* Evaluation Methods 0 proofs
int main(int argc, char *argv[])
{
	int	i;

	i = 0;
	printf("Evaluation methods test (first argument)\n");
	printf("	Method			character \n");
	printf("   ft_isalpha		  1st: %i\n", ft_isalpha(argv[1][i++]));
	printf("   ft_isdigit		  2nd: %i\n", ft_isdigit(argv[1][i++]));
	printf("   ft_isalnum		  3rd: %i\n", ft_isalnum(argv[1][i++]));
	printf("   ft_isascii		  4th: %i\n", ft_isascii(argv[1][i++]));
	printf("   ft_isprint		  5th: %i\n", ft_isprint('\01'argv[1][i++]));
	i = 0;
	printf("Memory methods test (no argument)\n");
	char mem[10] = "Mayonesa";
	char *mem2 = mem + 2;
	memcpy(mem2, mem, 10);
	printf("%s", mem2);
	return (0);
}*/
int main(int argc, char *argv[])
{
	char *a;
	char *b;
	void *va;
	void *vb;

	a = argv[1];
	va = a;
	b = argv[2];
	vb = b;
	printf("%i", ft_strncmp(argv[1], argv[2], 6));
	printf("%i", strncmp(argv[1], argv[2], 6));
	printf("%i", ft_memcmp(va, vb, 6));
}
