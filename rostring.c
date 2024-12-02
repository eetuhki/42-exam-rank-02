#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	char *s;

	if (ac > 1) //confirm we have at least one argument
	{
		s = av[1];
		i = 0;
		while (s[i] == ' ' || s[i] == '\t') //skip white space in the beginning of the string, if any
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i]) //skip first word/characters and make sure != '\0'
			i++;
		while (s[i] == ' ' || s[i] == '\t') //skip white space after first word
			i++;
		while (s[i]) //handle the rest of the string
		{
			if (s[i] != ' ' && s[i] != '\t') //write word/characters
				write(1, &s[i], 1);
			if ((((s[i] == ' ' || s[i] == '\t') && (s[i + 1] != ' ' && s[i + 1] != '\t')) || s[i + 1] == '\0')) //skip any extra white space and write single space
				write(1, " ", 1);
			i++;
		}
		i = 0; //reset counter to start over from the beginning of the string
		while (s[i] == ' ' || s[i] == '\t') //once again we skip over the leading white space, if any
			i++;
		while (s[i] != ' ' && s[i] != '\t' && s[i]) //finally we write the first word/characters
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	write(1, "\n", 1); //write new line if no args
	return (0);
}
