#include<stdio.h>

char    *ft_strrev(char *str)
{
	int i;
	int length;
	char tmp;

	i = -1;
	length = 0;
	while(str[length])
		length++;
	while(++i < length / 2)
	{
		tmp = str[i];
		str[i] = str[length-1-i];
		str[length-1-i] = tmp;
	}
	return (str);
}

int main()
{
    char str[] = "Hello, world!";

    printf("String original: %s\n", str);

    // Chamada da função para inverter a string
    ft_strrev(str);

    printf("String invertida: %s\n", str);

    return 0;
}


