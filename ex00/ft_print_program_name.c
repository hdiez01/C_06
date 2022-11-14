int	main(int argc, char **argv)
{
	int	c;

	c = 0;
	if (argc > 0)
	{
		while (argv[c] != '\0')
		{
			write(1, &argv[c], 1);
			c++;
		}
		wrtie(1, "\n", 1);
	}
	return(0);
}