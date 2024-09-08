#include<unistd.h>

int has_char(char c, char *s)
{
    while(*s)
    {
        if(c == *s)
            return 1;
        s++;
    }
    return (0);
}
void ft_union(char *str1,char *str2)
{
    char seen[126] = {0};
    int i =0;

    while(*str1)
    {
        if(!has_char(*str1,seen))
        {
            write(1,str1,1);
            seen[i] = *str1;
            i++;
        }
        str1++;
    }

    while(*str2)
    {
        if(!has_char(*str2,seen))
        {
             write(1,str2,1);
            seen[i] = *str2;
            i++;
        }
        str2++;
    }
}
int main(int argc,char **argv)
{
    if(argc == 3)
        ft_union(argv[1],argv[2]);
    write(1,"\n",1);
    return (0);    
}