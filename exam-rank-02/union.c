// solution 1

#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int j;
	unsigned char seen[256] = {0};

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			if (!seen[(unsigned char)av[1][i]])
			{
				write(1, &av[1][i], 1);
				seen[(unsigned char)av[1][i]] = 1;
			}
			i++;
		}
		while (av[2][j])
		{
			if (!seen[(unsigned char)av[2][j]])
			{
				write(1, &av[2][j], 1);
				seen[(unsigned char)av[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// solution 2

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac != 3)
		write(1, "\n", 1);
	else
	{
		i = 1;
		j = 0;
		int	ascii[255] = {0};
		while (i < 3)
		{
			while (av[i][j])
			{
				if (ascii[(int)av[i][j]] == 0)
				{
					ascii[(int)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				j += 1;
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
