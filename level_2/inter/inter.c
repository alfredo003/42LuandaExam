#include<unistd.h>

int has_char(char *s,char c)
{
	while(*s)
	{
		if(*s == c)
			return (1);
		++s;
	}
	return (0);
}
void inter(char *str1,char *str2)
{
	char string[128] = {0};
	int i;
	
	i=0;
	while(*str1)
	{
		if(has_char(str2,*str1) && !has_char(string,*str1))
		{
			write(1,str1,1);
			string[i] = *str1;
			i++;
		}
		++str1;
	}
}
int main(int argc,char **argv)
{
	if(argc == 3)
		inter(argv[1],argv[2]);
	write(1,"\n",1);
	return (0);
}
