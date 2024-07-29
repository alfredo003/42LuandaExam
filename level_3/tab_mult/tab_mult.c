#include<unistd.h>
int ft_atoi(char *str)
{
	int res= 0;
	while(*str)
	{
		res = res * 10 + *str++ - 48;
	}
	return (res);
}
void put_nbr(int num)
{
	if(num >= 10)
		put_nbr(num / 10);
	char digit = num  % 10 + '0';
	write(1,&digit,1);
}
void tab_mult(char *str)
{
	int num = ft_atoi(str);
	int i = 1;
	while(i <= 9)
	{
		put_nbr(i);
		write(1," x ",3);
		put_nbr(num);
		write(1," = ",3);
		put_nbr(num*i);
		i++;
		write(1,"\n",1);
	}
}
int main(int argc,char **argv)
{
	if(argc == 2)
	{
		tab_mult(argv[1]);
	}else
	write(1,"\n",1);	
	return (0);
}