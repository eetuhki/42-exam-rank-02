#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*s;

	if (ac == 2)
	{
		i = -1;
		s = av[1];
		while (s[++i])
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				write(1, "_", 1);
				s[i] += 32;
			}
			write(1, &s[i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
