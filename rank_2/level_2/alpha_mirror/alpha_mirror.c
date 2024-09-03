#include<unistd.h>

void alpha(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i]>= 'a' && str[i] <= 'z')
			str[i] = 'm' - (str[i] - 'n');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'M' - (str[i] - 'N');
		write(1,&str[i],1);
		i++;

	}
}
int main(int argc,char **argv)
{
	if(argc == 2)
		alpha(argv[1]);
	return (0);
}
