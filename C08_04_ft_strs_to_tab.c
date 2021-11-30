int main(int argc, char **argv)
{
	t_stock_str *s = ft_strs_to_tab(argc, argv);
	printf("%s\n", s[2].copy);
	return 0;
}

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

#endif
