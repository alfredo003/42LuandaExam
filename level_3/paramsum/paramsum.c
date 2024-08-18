#include<unistd.h>

void ft_put(int num)
{
	if(num > 9)
		ft_put(num/10);
	char digit = num % 10 + '0';
	write(1,&digit,1);
}
int main(int argc,char **argv)
{
	if(argc > 1)
	{	
		ft_put(argc-1);
	}else
		write(1,"0",1);
	write(1,"\n",1);
	return (0);
}
