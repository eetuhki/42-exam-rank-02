int	max(int* tab, unsigned int len)
{
	int	n;

	if (!tab || !len)
		return (0);
	n = tab[0];
	while (len--)
	{
		if (n < tab[len])
			n = tab[len];
	}
	return (n);
}

/* #include <stdio.h>

int	main()
{
	int tab[] = {11, -1, 4, -4, 4, 67, -68, 30};

	printf("max: %d\n", max(tab, 8));
	return (0);
} */
