#include <libc.h>

int main()
{
	char *s1 = "coucou";
	char *s2 = "coucous";
	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d\n", strcmp(s1, s2));
	return 0;
}
