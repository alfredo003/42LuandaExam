#include<unistd.h>

void  print(int num)
{
	if(num >= 10)
		print(num/10);
	char digit = num % 10 + '0';
	write(1,&digit,1);
}

int main(int argc,char **argv)
{
	int i = 1;
	while(i < 100)
	{
		if(i % 16 == 0)
		{
			write(1,"fizzbuzz",8);
		}
		else if(i % 3 == 0)
		{
			write(1,"fizz",4);
		}
		else if (i % 5 == 0)
		{
			write(1,"buzz",4);
		}
		write(1,"\n",1);
		print(i);
		i++;
	}
	return (0);
}
