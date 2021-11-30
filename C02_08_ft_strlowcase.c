#include <libc.h>

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strlowcase((argv[1])));
	return 0;
}
