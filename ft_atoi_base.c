int	ft_atoi_base(const char *str, int str_base)
{
	int		i;
	int		digit;
	int		sign;
	int		result;
	char	c;

	if (str_base < 2 || str_base > 16)
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	if (str[i] == '-')
	{
		i++;
		sign = -1;
	}
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			c += 32;
		if (c >= '0' && c <= '9')
			digit = c - '0';
		else if (c >= 'a' && c <= 'z')
			digit = c - 'a' + 10;
		else
			break;
		if (digit >= str_base)
			break;
		result = result * str_base + digit;
		i++;
	}
	return (result * sign);
}
