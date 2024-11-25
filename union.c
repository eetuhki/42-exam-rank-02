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
