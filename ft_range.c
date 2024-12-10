#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_range(int start, int end)
{
	int	*array;
	int	len;
	int	i = -1;

	len = ft_abs(end - start) + 1;
	array = malloc(sizeof(int) * len);
	if (!array)
		return (0);
	while (++i < len)
	{
		if (start < end)
			array[i] = start++;
		else
			array[i] = start--;
	}
	return (array);
}
/* 
#include <stdio.h>

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
