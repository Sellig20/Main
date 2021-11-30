#include <libc.h>

int main()
{
	char *str1 = "coucou";
	char *str2 = "jo";
	printf("%s\n", ft_strcat(str1, str2));
	printf("%s\n", strcat(str1, str2));
	return 0;
}
