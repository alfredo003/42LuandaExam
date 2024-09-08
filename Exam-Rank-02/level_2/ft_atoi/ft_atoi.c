int	ft_atoi(const char *str)
{
	int sign =1;
	int res =0;

	while(*str == ' ' || *str == '\t')
		str++;
	if(*str == '-')
		sign *=-1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str++ - 48;
	}
	return (sign * res);
}
