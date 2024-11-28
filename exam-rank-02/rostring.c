#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char *s;

	if (ac > 1)
	{
		s = av[1];
		i = 0;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i])
			i++;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i])
		{
			if (s[i] != ' ' && s[i] != '\t')
				write(1, &s[i], 1);
			if ((((s[i] == ' ' || s[i] == '\t') && (s[i + 1] != ' ' && s[i + 1] != '\t')) || s[i + 1] == '\0'))
				write(1, " ", 1);
			i++;
		}
		i = 0;
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
