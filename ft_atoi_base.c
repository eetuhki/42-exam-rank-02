int	ft_atoi_base(const char *str, int str_base)
{
	int		result = 0;
	int		sign = 1;
	int		i = 0;
	int		digit;
	char	c;

	if (str_base < 2 || str_base > 36)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i])
	{
		c = str[i];

		if (c >= 'A' && c <= 'Z')
			c = c + 32;
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
