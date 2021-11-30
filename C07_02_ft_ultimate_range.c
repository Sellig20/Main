int main()
{
	int i;
	int min;
	int max;
	int *range;
	int size;

	i = 0;
	min = 10;
	max = 19;
	size = ft_ultimate_range(&range, min, max);
	printf("%d\n\n", size);
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	return 0;
}
