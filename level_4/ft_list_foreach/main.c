#include <stdio.h>
#include<stdlib.h>

typedef struct s_list
{
    struct s_list *next;
    void *data;
}   list;

void ft_foreach_list(list *begin_list,void(*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);
        begin_list=begin_list->next;
    }
}

void print_data(void *data)
{
    printf("%s\n",(char *)data);
}
int main(void)
{
    list *test1 = malloc(sizeof(list));
    list *test2 = malloc(sizeof(list));
    test1->data = "Angola";
    test1->next = test2;

    test2->data = "Brazil";
    test2->next = NULL;

    ft_foreach_list(test1,print_data);
    return (0);
}