#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_point
{
    struct s_point *next;
    void *data;
}   t_point;

#endif