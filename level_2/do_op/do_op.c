#include "do_op.h"


void do_op(char *a,char b,char *c)
{
	int n1 = atoi(a);
	int n2 = atoi(c);
	
	if(b == '+')
	{
		printf("%d\n",(n1+n2));
	}else if(b == '*')
	{
		printf("%d\n",(n1*n2));
	}else if(b == '/')
	{
		printf("%d\n",(n1/n2));
	} else if(b == '%')
	{
		printf("%d\n",(n1%n2));
	}
	 else if(b == '-')
	{
		printf("%d\n",(n1-n2));
	}
}
int main(int argc,char **argv)
{
	if(argc == 4)
	{
			do_op(argv[1],argv[2][0],argv[3]);
	}else
	{
		printf("\n");
	}
	return (0);
}
