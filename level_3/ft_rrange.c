#include<stdio.h>
#include<stdlib.h>

int *ft_rrange(int start,int end)
{
	int len = end - start;
	int step =1;
	int i =0;
	if(len < 0)
		len *=-1;
	int *res = (int *)malloc(sizeof(int) * len+1);
	
	if(res)
	{
		if(start > end)
			step = -1;
		while(i <= len)
		{
			res[i] = end;
			end -= step;
			i++;
		}
	}	
	
	return (res);
}
/*int main(int argc,char **argv)
{
	int *res = ft_rrange(0,0);
	int         i=0;   
	while(i <= 3)
	{
		printf("%d",res[i]);
		i++;
	}
	free(res);
	return (0);
}*/
