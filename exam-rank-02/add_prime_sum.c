#include <unistd.h>

int	ft_atoi(char *s)
{
	int	n;

	n = 0;
	while (*s)
		n = n * 10 + *s++ - '0';
	return (n);
}

void	putnbr(int n)
{
	char	c;

	if (n > 9)
		putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int	is_prime(int n)
{
	int	i;

	i = 2;
	while (i < n)
	{
		if (!(n % i))
			return (0);
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	int	n;
	int	i;
	int	sum;

	if (ac != 2 || !av[1][0] || av[1][0] == '-')
		putnbr(0);
	else
	{
		sum = 0;
		i = 2;
		n = ft_atoi(av[1]);
		while (i <= n)
		{
			if(is_prime(i))
				sum += i;
			i++;
		}
		putnbr(sum);
	}
	write(1, "\n", 1);
	return (0);
}
