#include <libc.h>

int main(int argc, char **argv)
{
	int nb ;

	nb = 7;
	(void)argc;
		printf("%s\n", ft_strncat(argv[1], argv[2], nb));
		printf("%s\n", strncat(argv[1], argv[2], nb));
	return 0;
}
