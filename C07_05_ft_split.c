int main(int argc, char **argv)
{
	(void)argc;
    int i = 0;
    char **tab;

    tab = ft_split(argv[1], argv[2]);
    while (tab[i])
    {
        printf("%s\n", tab[i]);
        i++;
    }
	printf("%s\n", tab[i]);
    return (0);
}
