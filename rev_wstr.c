#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;
	i = -1;
	while (str[++i])
		;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	len;
	char *rev;
	char *tmp;

	if (ac == 2)
	{
		len = ft_strlen(av[1]);
		tmp = av[1];
		rev = NULL;
		len--;
		while (tmp[len])
		{
			if (tmp[len - 1] == ' ')
			{
				rev = &tmp[len];
				while (*rev && *rev != ' ')
				{
					ft_putchar(*rev);
					rev++;
				}
				ft_putchar(' ');
			}
			else if (len == 0)
			{
				rev = &tmp[len];
				while (*rev && *rev != ' ')
				{
					ft_putchar(*rev);
					rev++;
				}
			}
			len--;
		}
	}
	ft_putchar('\n');
}
