int		max(int* tab, unsigned int len)
{
	int n;

	n = 1;
	if (!tab || len == 0)
		return (0);
	n = tab[0];
	while (len-- > 0)
	{
		if (n < tab[len])
			n = tab[len];
	}
	return (n);
}
