#include <unistd.h>

int	atoi(char *str)
{
	int n;
	int	i;

	n = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + str[i] - '0';
		i++;
	}
	return (n);
}

void	putnbr(int nbr)
{
	char c;

	if (nbr > 9)
		putnbr(nbr / 10);
	c = nbr % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int i;
	int	n;

	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		n = atoi(av[1]);
		while (++i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(n);
			write(1, " = ", 3);
			putnbr(i * n);
			write(1, "\n", 1);
		}
	}
	return (0);
}
