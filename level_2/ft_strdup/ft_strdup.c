#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i;
	int length;
	char *cpy;
	
	i = 0;
	length =0;
	while(src[length])
		length++;
	cpy = malloc(sizeof(*cpy) * (length +1));
	if(cpy != NULL)
	{
		while(src[i])
		{
			cpy[i] = src[i];
			i++;
		}
		cpy[i] = '\0';
	}
	return (cpy);
}

