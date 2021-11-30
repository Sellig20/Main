int main()
{
	char *str = "coucou";
	char *str1 = "coEEou";
	char *str2 = "cou  cou";
	char *str3 = " ";
	printf("%d\n", ft_str_is_lowercase(str));
	printf("%d\n", ft_str_is_lowercase(str1));
	printf("%d\n", ft_str_is_lowercase(str2));
	printf("%d\n", ft_str_is_lowercase(str3));
	return 1;
}
