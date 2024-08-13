#include<unistd.h>

int ft_atoi(char *str)
{
	int res =0;
	while(*str)
	{
		res = res * 10 + *str++ - 48;
	}
	return (res);
}

int is_prime(int num)
{
	int i = 2;
	if(num <= 1)
		return(0);
	while(i * i <= num)
	{
		if(i % num == 0)
			return (0);
		i++;
	}
	return (1);
}
void put_nbr(int num)
{
	if(num > 9)
		put_nbr(num/10);
	char digit = num % 10 + '0';
	write(1,&digit,1);
}
int main(int argc,char **argv)
{
	if(argc == 2)
	{
		int num = ft_atoi(argv[1]);
		int sum = 0;

		while(num > 0)
		{
			if(is_prime(num))
				sum += num;
			num--;
		}
		put_nbr(sum);
	}
	

	if(argc != 2)
		put_nbr(0);
	write(1,"\n",1);
	return(0);
}
