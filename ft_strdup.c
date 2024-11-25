#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = -1;
	while (src[++i])
		;
	dest = malloc(sizeof(i + 1));
	i = -1;
	if (src)
	{
		while(src[++i])
			dest[i] = src[i];
		dest[i] = '\0';
	}
	return(dest);
}
