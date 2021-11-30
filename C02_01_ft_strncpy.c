#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char str[] = "Source string.";
	char str1[] = "Destination string.";
	unsigned int n;

	n = 2;

	printf("avant\n\tsrc: %s\n\tdes: %s\n", str, str1);

    ft_strncpy(str, str1, n);

	printf("apres\n\tsrc: %s\n\tdes: %s\n", str, str1);
	return (0);
}
