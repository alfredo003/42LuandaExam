int ft_atoi_base(const char *str,int str_base)
{
	int i = 0;
	int sign = 1;
	int res =0;
	int digit = 0;

	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if(str[i] == '-')
		sign =-1;
	while(str[i] == '-' || str[i] == '+')
		i++;
	while((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'A' && str[i] <= 'F') || (str[i] >= 'a' && str[i] <= 'f'))
	{
		if(str[i] >= '0' && str[i] <= '9')
			digit = str[i] - '0';
		else if (str[i] >= 'A' && str[i] <= 'F')
			digit = str[i] - 'A' + 10;
		else
			digit = str[i] - 'a' + 10;
		if(digit >= str_base)
			break;

		res = res * str_base + digit;
		i++;
		
	}

	return sign * res;
		
}
