#include <libc.h>

unsigned	int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned long	i;
	unsigned long	j;
	unsigned long	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	while (src[k] && i + 1 < size)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	dest[i] = '\0';
	return (j);
}

int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_strlcat(argv[1],argv[2],atoi(argv[3])));
	printf("%lu\n", strlcat(argv[1],argv[2],atoi(argv[3])));
	return 0;
}
