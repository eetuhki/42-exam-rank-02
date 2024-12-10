#include <unistd.h>

void	putnbr(int n)
{
	char	c;

	if (n > 9)
		putnbr(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	(void)av;

	putnbr(ac - 1);
	write(1, "\n", 1);
	return (0);
}
