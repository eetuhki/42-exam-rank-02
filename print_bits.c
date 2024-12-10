#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i;
	int	bit;

	i = 8;
	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

/* int	main()
{
	print_bits(2);
	return (0);
}
 */
