#ifndef MY_LINKED_LIST_H
    #define MY_LINKED_LIST_H

#include <stddef.h>

struct node
{
    void *data;
    struct node *next;
    struct node *previous;
};
typedef struct node NODE;

void add_node(NODE *head, NODE *to_add);
void init_node(void *data,
                NODE *new_node,
                size_t data_size);
int remove_node(void);
int empty_list(void);

#endif
