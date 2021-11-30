#include <libc.h>

int main()
{
	char *str = "coucou";
	char *str1 = "";
	char *str2 = "\v\t";
	char *str3 = "     ";
	printf("%d\n", ft_str_is_printable(str));
	printf("%d\n", ft_str_is_printable(str1));
	printf("%d\n", ft_str_is_printable(str2));
	printf("%d\n", ft_str_is_printable(str3));
	return 1;
}
