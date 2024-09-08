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
void inter(char *s1,char *s2)
{
	int i =0;
	char seen[128] = {0};
	
	while(*s1)
	{
		if(has_char(s2,*s1) && !has_char(seen,*s1))
		{
			write(1,s1,1);
			seen[i] = *s1;
			i++;
		}
		s1++;
	}
}
int main(int argc,char **argv)
{
	if(argc == 3)
		inter(argv[1],argv[2]);
	write(1,"\n",1);
	return (0);
}
