#include<stdio.h>
#include<stdlib.h>

void ft_pgcd(int n1,int n2)
{
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    printf("%d",n1);
}
int main(int argc,char **argv)
{
    if(argc == 3)
    {
        int n1 = atoi(argv[1]);
        int n2 = atoi(argv[2]);
        ft_pgcd(n1,n2);
    }
    printf("\n");
    return (0);
}