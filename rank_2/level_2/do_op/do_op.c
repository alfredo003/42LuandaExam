#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void do_op(int n1,int n2,char s)
{
	if(s == '/')
		printf("%d\n",(n1/n2));
	else if(s == '+')
		printf("%d\n",(n1+n2));
	else if(s == '*')
		printf("%d\n",(n1*n2));
	else if(s == '-')
		printf("%d\n",(n1-n2));
	else if(s == '%')
		printf("%\nd",(n1%n2));
	else
		printf("\n");
}
int main(int argc,char **argv)
{
	if(argc == 4)
	{
		int n1 = atoi(argv[1]);
		int n2 = atoi(argv[3]);
		do_op(n1,n2,argv[2][0]);
	}
	return (0);
}
