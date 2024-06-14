#include <unistd.h>
#include<stdio.h>

void print_bits(unsigned char octet)
{
	int i;
	char bit;
	
	i=8;
	while(i>0)
	{
		bit = (octet>> i & 1) + '0';
		write(1,&bit,1);
		i--;
	}
}

int main()
{
		print_bits(42);
		return (0);
}
