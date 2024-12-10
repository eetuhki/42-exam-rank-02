int    ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int	main()
{
	char *s1;
	char *s2;

	s1 = "-17398";
	s2 = "dsalkjsf";
	printf("my: %d\n", ft_strcmp(s1, s2));
	printf("og: %d\n", strcmp(s1, s2));
	return (0);
}
 */