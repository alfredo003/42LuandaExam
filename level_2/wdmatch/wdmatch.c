#include<unistd.h>

void ft_putstr(char *str)
{
	while(*str)
	{
		write(1,str,1);
		str++;
	}
}
int wdmatch(char *s1,char *s2)
{
	while(*s2)
	{
		if(*s1 == *s2)
		{
			s1++;
		}
		s2++;
	}
	return (*s1 == '\0');
}
int main(int argc,char **argv)
{
	if(argc == 3)
		if(wdmatch(argv[1],argv[2]))
		{
			ft_putstr(argv[1]);
		}
	write(1,"\n",1);
	return (0);
}
