#include<stdio.h>
#include<stdlib.h>


char *ft_strncpy(char *s1,char *s2 , int size)
{
	int i =-1;
	while(++i < size && s2[i])
		s1[i] = s2[i];
	s1[i] = '\0';
	return (s1);
}
char **ft_split(char *str)
{
	int i=0;
	int len=0;
	int k =0;
    int j = 0;
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(str[i])
			len++;
		while(str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;		
	}
	
	char **res = (char **)malloc(sizeof(char *) * len + 1);
	i =0;
	
	while(str[i])
	{
		while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		j = i;
		while(str[i] && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if(i > j)
		{
			res[k] = (char *)malloc(sizeof(char)* (i-j)+1);
			ft_strncpy(res[k++],&str[j],(i-j));
		}
	}
	
	res[k] = '\0';
	return (res);
}



int main(int argc,char **argv)
{
    char **test = ft_split("Alfredo Manuel");


    printf("%s",test[1]);
    return (0);
}