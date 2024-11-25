#include <unistd.h>

int	word_len(char *str)
{
	int i;

	i = -1;
	while (str[i] != '\0' && str[i] != 32 && str[i] != 9)
		i++;
	return (i);
}

int	main(int ac, char **av)
{
	int	add_space;
	int	i;

	add_space = 0;
	i = 0;
	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		while (av[1][i] == 32 || av[1][i] == 9)
			i++;
		while (av[1][i])
		{
			if (av[1][i] == 32 || av[1][i] == 9)
				add_space = 1;
			else
			{
				if (add_space)
					write(1, "   ", 3);
				add_space = 0;
				write(1, &av[1][i], 1);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
