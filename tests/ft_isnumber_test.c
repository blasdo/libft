#include <libft.h>
#include <signal.h>

void handler(int signum)
{
	if (signum == SIGSEGV)
	{
		printf("KO SEGMENTATION FAULT\n");
		exit(-1);
	}
	return;
}
int main()
{
	struct sigaction sa;
	sa.sa_handler = handler;
	sigaction(SIGSEGV, &sa, NULL);
	printf("THIS TEST DON'T CONTROL OVERFLOW\n");
	printf("TEST 1: \"123\" (SIGN 0): %s\n", ft_isnumber("123", 0)? "OK": "KO");
	printf("TEST 2: \"123\" (SIGN 1): %s\n", ft_isnumber("123", 1)? "OK": "KO");
	printf("TEST 3: \"-1\" (SIGN 0): %s\n", ft_isnumber("-1", 0)? "KO": "OK");
	printf("TEST 4: \"-1\" (SIGN 1): %s\n", ft_isnumber("-1", 1)? "OK": "KO");
	printf("TEST 5: \" \"(SIGN 0): %s\n", ft_isnumber(" ", 0)? "KO": "OK");
	printf("TEST 6: \" \"(SIGN 1): %s\n", ft_isnumber(" ", 1)? "KO" : "OK");
	printf("TEST 7: EMPTY STRING (SIGN 0): %s\n", ft_isnumber("", 0)? "KO": "OK");
	printf("TEST 8: EMPTY STRING (SIGN 1): %s\n", ft_isnumber("", 1)? "KO": "OK");
	printf("TEST 9: NULL_STR (SIGN 0): %s\n", ft_isnumber(NULL, 1)? "KO": "OK");
	printf("TEST 10: NULL_STR (SIGN 1): %s\n", ft_isnumber(NULL, 1)? "KO": "OK");
}
