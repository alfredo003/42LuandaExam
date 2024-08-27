#include<unistd.h>

void hidnep(char *str1,char *str2)
{
    int i=0;
    int j=0;

    while(str1[i] && str2[j])
    {
            if(str1[i] == str2[j])
                i++;
            j++;
    }
    if(str1[i] == '\0')
        write(1,"1",1);
    else
        write(1,"0",1);
}
int main(int argc,char **argv)
{
    if(argc == 3)
        hidnep(argv[1],argv[2]);
    write(1,"\n",1);
    return (0);
}