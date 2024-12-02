#include <stdlib.h>

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	*ft_rrange(int start, int end)
{
	int	*res;
	int	len;

	len = ft_abs(end - start) + 1;
	res = malloc(sizeof(int) * len);
	if (!res)
		return (NULL);
	while (len--)
	{
		if (start < end)
			res[len] = start++;
		else
			res[len] = start--;
	}
	return (res);
}
