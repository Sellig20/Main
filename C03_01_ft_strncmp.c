#include <libc.h>

int main()
{
	char *str = "coucou";
	char *str2 = "coucous";
	printf("%d\n", ft_strncmp(str, str2, 5));
	printf("%d\n", strncmp(str, str2, 5));
	return 0;
}
