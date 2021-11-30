#include <libc.h>

int main()
{
	char *to_find = "Bar";
	char *str = "Foo Bar Baz";
	char *str1 = "Mon aiguille arrive ici et coupe le reste de ma string";
	char *to_find1 = "ici";
	char *str2 = "pour aiguille vide";
	char *to_find2 = " ";
	char *str3 = " ";
	char *to_find3 = "str_vide";
	printf("------------exemple 1 -------------\n");
	printf("\n");
	printf("String = FooBarBaze \nAiguille = Bar \nreturn(result) = %s\n", ft_strstr(str, to_find));
	printf("\n");
	printf("------------exemple 2 -------------\n");
	printf("\n");
	printf("String = Mon aiguille arrive ici et coupe le reste de ma string \nAiguille = ici \nreturn(result) = %s\n", ft_strstr(str1, to_find1));
	printf("\n");
	printf("------------exemple 3 -------------\n");
	printf("\n");
	printf("String = Pour aiguille vide \nAiguille = " " \nreturn(result) = %s\n", ft_strstr(str2, to_find2));
	printf("\n");
	printf("------------exemple 4 -------------\n");
	printf("\n");
	printf("String = " " \nAiguille = " " \nreturn(result) = %s\n", ft_strstr(str3, to_find3));
	return 0;
}
