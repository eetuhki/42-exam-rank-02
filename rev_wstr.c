#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	start;
	int	end;
	int	space;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i])
			i++;
		while (i > 0)
		{
			while (av[1][i] == ' ' || av[1][i] == '\0')
				i--;
			end = i;
			while (av[1][i] != ' ' && av[1][i])
				i--;
			start = i + 1;
			space = start;
			while (start <= end)
				write(1, &av[1][start++], 1);
			if (space)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
