int main()
{
	int i;
	int tab[] = {2, 54, 3, 65};
	int size;

	i = 0;
	size = 4;

	ft_rev_int_tab(tab, size);
	while(i < 4)
	{
		printf("%d", tab[i]);
		i++;
	}
	return 0;
}
