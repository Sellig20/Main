#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;

#endif

------------------

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = ft_strlen(str);
	dest = malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int	i;
	t_stock_str	*stock;

	i = 0;
	stock = malloc(sizeof(t_stock_str) * (argc + 1));
	if (stock == NULL)
	{
		return (NULL);
	}
	while (i < argc)
	{
		stock[i].size = ft_strlen(argv[i]);
		stock[i].copy = ft_strdup(argv[i]);
		stock[i].str = argv[i];
		i++;
	}
	stock[i].str = 0;
	return (stock);
}
