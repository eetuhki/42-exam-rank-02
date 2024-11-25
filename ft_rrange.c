#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	*array;
	int	i;
	int	len;
	int	step;

	i = -1;
	len = 1 + ft_abs(end - start);
	array = malloc(sizeof(int) * len);
	if (start > end)
		step = 1;
	else
		step = -1;
	while (++i < len)
	{
		array[i] = end;
		end = end + step;
	}
	return (array);
}
