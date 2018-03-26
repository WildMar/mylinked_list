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

int add_node(NODE *head, NODE *to_add);
void init_node(void *data,
                NODE *new_node);
int remove_node(NODE *head, void *to_remove, 
                int (func)(void *, void *));
int empty_list(void);

#endif
