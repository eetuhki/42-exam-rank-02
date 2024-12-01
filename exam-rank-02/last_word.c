#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	char	*s;

	if (ac == 2)
	{
		i = 0;
		s = av[1];
		while (s[i + 1] != '\0')
			i++;
		while (s[i] == ' ' || s[i] == '\t')
			i--;
		while (s[i - 1] != ' ' && s[i - 1] != '\t')
			i--;
		while ((s[i] != ' ' && s[i] != '\t') && s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
