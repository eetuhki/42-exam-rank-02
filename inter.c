#include <unistd.h>

int	main(int ac, char **av)
{
	int i;
	int	j;
	unsigned char first[256] = {0};

	if (ac == 3)
	{
		i = 0;
		while (av[1][i])
		{
			j = 0;
			while (av[2][j])
			{
				if (av[1][i] == av[2][j])
				{
					if (!first[(unsigned char)av[1][i]])
					{
						write(1, &av[1][i], 1);
						first[(unsigned char)av[1][i]] = 1;
					}
					break;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
