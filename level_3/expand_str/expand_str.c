#include<unistd.h>

void expand_str(char *str)
{
    int flag =0;
    while(*str == ' ' || *str == '\t')
        str++;
    while(*str)
    {
        if(*str == ' ' || *str == '\t')
            flag=1;
        if(*str && !(*str == ' ' || *str == '\t'))
        {
            if(flag)
                write(1,"   ",3);
            write(1,str,1);
            flag=0;
        }
        str++;
    }
}
int main(int argc,char **argv)
{
    if(argc==2)
        expand_str(argv[1]);
    write(1,"\n",1);
    return (0);
}