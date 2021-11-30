#include <libc.h>

int main()
{
	char *str = "COUCOU";
	char *str1 = "coEEou";
	char *str2 = "COU COU";
	char *str3 = "      ";
	printf("%d\n", ft_str_is_uppercase(str));
	printf("%d\n", ft_str_is_uppercase(str1));
	printf("%d\n", ft_str_is_uppercase(str2));
	printf("%d\n", ft_str_is_uppercase(str3));
	return 1;
}
