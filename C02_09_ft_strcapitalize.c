#include <libc.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strcapitalize(argv[1]));
	return 0;
}
