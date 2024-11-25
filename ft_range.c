#include <stdlib.h>
/* #include <stdio.h> */

int	ft_abs(int n)
{
	if (n < 0)
		return(-n);
	else
		return (n);
}

int     *ft_range(int start, int end)
{
	int	*array;
	int	size;
	int	i;

	size = ft_abs(end - start) + 1;
	array = malloc(sizeof(int) * size);
	if (!array)
		return (NULL);
	i = 0;
	if (start < end)
	{
		while (start <= end)
		{
			array[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			array[i] = start;
			start--;
			i++;
		}
	}
	return (array);
}
/* 
int	main(int ac, char **av)
{
	int len;
	int	*arr;
	int	i;

	i = 0;
	len = ft_abs(atoi(av[2]) - atoi(av[1]));
	arr = ft_range(atoi(av[1]), atoi(av[2]));
	while (i <= len)
	{
		printf("%d", arr[i++]);
	}
	return (0);
}
 */