int main()
{
	int i;
	int min;
	int max;
	int *tab;

	i = 0;
	min = 2;
	max = 10;
	tab = ft_range(min, max);
	while (i < 8)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return 0;
}
