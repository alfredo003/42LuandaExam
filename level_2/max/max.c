#include<unistd.h>
#include<stdio.h>

int max(int *tab,unsigned int len)
{
	 int i;
	 int result;
	 i=0;
	 if(len <= 0)
	 	return (0);
	 result = tab[i];
	 while(i<len)
	 {
	 	if(result < tab[i])
	 		result = tab[i];
	 	i++;
	 }
	 return (result);
}
int main(int argc,char **argv)
{
	int array[5] = {1,2,3,40,5};
	printf("Largest Number is : %d",max(array,5));
	return (0);
}
