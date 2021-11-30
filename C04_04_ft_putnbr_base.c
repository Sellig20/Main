int main(int argc, char **argv)
{
	(void)argc;
	ft_putnbr_base(atoi(argv[1]), (argv[2]));
	return 0;
}

/*./a.out "" "poneyvif"
./a.out "42" "poneyvif"
./a.out "42" ""
./a.out "42" "0123456789abcdef"
./a.out "42" "0123456789abcdef"
./a.out "42" "01234456789abcdef"
./a.out "42" "012+3456789abcdef"
./a.out "42" "0123456789abcdeff"
./a.out "42" "01"
./a.out "42" "01-"
./a.out "42" "01-"
./a.out "-42" "0123456789abcdef"*/
