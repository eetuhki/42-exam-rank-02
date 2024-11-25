#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	value1;
	int	value2;
	

	if (av[1] && av[3])
	{
		value1 = atoi(av[1]);
		value2 = atoi(av[3]);
	}
	if (value1 && value2 && ac == 4)
	{
		value1 = atoi(av[1]);
		value2 = atoi(av[3]);
		if (av[2][0] == '+')
			printf("%d", (value1 + value2));
		if (av[2][0] == '-')
			printf("%d", (value1 - value2));
		if (av[2][0] == '*')
			printf("%d", (value1 * value2));
		if (av[2][0] == '/')
			printf("%d", (value1 / value2));
		if (av[2][0] == '%')
			printf("%d", (value1 % value2));
	}
	printf("\n");
	return(0);
}
