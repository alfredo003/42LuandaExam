#include<stdlib.h>
#include<unistd.h>

void rostring(char *str)
{
    char *word_start;
    char *word_end;

    while(*str && (*str == ' ' || *str == '\t'))
        str++;
    word_start = str;
    while(*str && !(*str == ' ' || *str == '\t'))
        str++;
    word_end = str;
    while(*str == ' ' || *str == '\t')
        str++;
    if(*str)
    {
        while(*str)
        {
            if(*str == ' ' || *str == '\t')
            {
                    while(*str == ' ' || *str == '\t')
                        str++;
                    if(*str)
                        write(1," ",1);
            }
            else
            {
                write(1,str,1);
                str++;
            }
        }
        write(1," ",1);
    }
    while(word_start < word_end)
    {
        write(1,word_start,1);
        word_start++;
    }

}
int main(int argc,char **argv)
{
    if(argc > 1)
        rostring(argv[1]);
    write(1,"\n",1);
    return (0);
}