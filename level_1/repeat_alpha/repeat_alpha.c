#include<unistd.h> 

void repeat(char c,int len)
{
    int i =0;
    while(len >= i)
    {
        write(1,&c,1);
        i++;
    }
}
void repeat_alpha(char *str)
{
    while(*str)
    {
        if((*str >= 'a' && *str <= 'z') )
            repeat(*str,(*str-'a'));
        else if (*str >= 'A' && *str <= 'Z')
            repeat(*str,(*str-'A'));
        else
            write(1,str,1);
        str++;
    }
}
int main(int argc,char **argv)
{
    if(argc == 2)
        repeat_alpha(argv[1]);
    write(1,"\n",1);
    return (0);
}