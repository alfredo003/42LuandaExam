#include<stdio.h>
#include<stdlib.h>

void fprime(int num)
{
    int i =1;

    while(num >= ++i)
    {
        if(num % i == 0)
        {
                printf("%d",i);
                if(num == i)
                    break;
                printf("*");
                num = num / i;
                i = 1;
        }
    }
}

int main(int argc,char **argv)
{
    if(argc == 2)
    {
        int num = atoi(argv[1]);
        fprime(num);
    }
    printf("\n");
    return (0);
}