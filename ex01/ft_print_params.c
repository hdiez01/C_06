int	main(int argc, char **argv)
{
	int	c;
	int	d;

	c = 0;
	if (argc > 0)
	{
		while (c < argc)
		{
			d = 0;
			while (argv[c][d] != '\0')
			{
				write(1, &argv[c][d], 1);
				d++;
			}
			write(1, "\n", 1);
			c++;
		}
	}
	return(0);
}