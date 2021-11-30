int main()
{
    int size = 5;
    char *strs[5];
        strs[0] = "Coucou";
        strs[1] = "Rania";
        strs[2] = "comment";
        strs[3] = "vas";
        strs[4] = "tu ?";
    char *sep = "/";
    printf("%s\n", ft_strjoin(size, strs, sep));
    return 0;
}
