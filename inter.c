#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;
	unsigned char	dup[256] = {0};

	if (ac == 3)
	{
		i = -1;
		while (av[1][++i])
		{
			j = -1;
			while (av[2][++j])
			{
				if (av[1][i] == av[2][j] && !dup[(unsigned char)av[1][i]])
				{
					write(1, &av[1][i], 1);
					dup[(unsigned char)av[1][i]] = 1;
				}
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
