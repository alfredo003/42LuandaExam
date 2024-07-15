#include <unistd.h>

void first_word(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\t')
			break;
		write(1,&str[i],1);
		i++;
	}
}

int main(int argc,char **argv)
{
	if(argc == 2)
		first_word(argv[1]);
		write(1,"\n",1);
	return (0);
}
