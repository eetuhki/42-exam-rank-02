
#include <stdlib.h>

int	num_len(int	n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	char	*res;
	int		len;

	if (!nbr)
		return ("0");
	len = num_len(nbr);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr)
	{
		res[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (res);
}

/* #include <stdio.h>

int	main()
{
	printf("%s\n", ft_itoa(98598));
	return (0);
}
 */
