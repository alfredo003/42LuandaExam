#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int ft_list_size(t_point *begin_list)
{
    if(begin_list == 0)
        return (0);
    return (1 + ft_list_size(begin_list->next));
}

t_point *addn(void *data)
{
    t_point *newItem = (t_point *)malloc(sizeof(t_point) );
    if(newItem)
    {
        newItem->data = data;
        newItem->next = NULL;
    }
    return newItem;
}

int main(int argc,char **argv)
{
    t_point *first;
    t_point *second;
    t_point *three;
     t_point *becond;

    first = addn("primeiro");
    second = addn("segundo");
    becond = addn("segundo");
    first->next =second;
    second->next =becond;

    int size = ft_list_size(first);
    printf("O tamanho da lista é: %d\n", size);

    free(first);
    free(second);
    return (0);
}