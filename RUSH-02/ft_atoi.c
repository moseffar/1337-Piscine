int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	issign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

int	isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	num(char c)
{
	if (c >= '0' && c <= '9')
		return (c - '0');
	return (0);
}

int	ft_atoi(char *str, unsigned int *n)
{

	*n = 0;
	if (*str && issign(*str))
	{
		return (0);
	}
	while (*str && isnum(*str))
	{
		*n *= 10;
		*n += num(*str);
		str++;
	}
	return (1);
}
