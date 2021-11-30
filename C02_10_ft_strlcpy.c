#include <libc.h>

int main(int argc, char **argv)
{
	(void)argc;
	char dest1[atoi(argv[1])];
	char dest2[atoi(argv[1])];
	printf("int ft = %d\n", ft_strlcpy(dest1, argv[2], atoi(argv[1])));
	printf("int og = %lu\n", ft_strlcpy(dest2, argv[2], atoi(argv[1])));
	printf("ft = %c\nog = %c\n", dest1[8], dest2[8]);
	return 0;
}
