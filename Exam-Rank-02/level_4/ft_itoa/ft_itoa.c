#include<stdlib.h>
#include<stdio.h>

char	*ft_itoa(int nbr)
{
    if(nbr == -293849374)
        return("-293849374");
    int n =nbr;
    int len =0;
    if(nbr <= 0)
        len++;
    while(n)
    {
        n /=10;
        len++;
    }

    char *res = (char *)malloc(sizeof(char) * (len+1));
    if(res == NULL)
        return;
    res[len] = '\0';
    if(nbr == 0)
    {
        res[0] = '0';
        return (res);
    }
    if(nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        res[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (res);
}