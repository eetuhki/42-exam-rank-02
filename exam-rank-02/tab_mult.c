#include <unistd.h>

void	putnbr(int n)
{
	char	c;

	if (n > 9)
		putnbr (n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	ft_atoi(char *s)
{
	int	n;

	n = 0;
	while (*s)
		n = n * 10 + *s++ - '0';
	return (n);
}

int	main(int ac, char **av)
{
	int	i;
	int	n;

	if (ac == 2)
	{
		i = 0;
		n = ft_atoi(av[1]);
		while (++i < 10)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(n);
			write(1, " = ", 3);
			putnbr(i * n);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
