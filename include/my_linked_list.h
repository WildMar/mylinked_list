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

struct linked_list
{
    NODE *head;
    NODE *tail;
};
typedef struct linked_list LLIST;

void add_node(LLIST *dest, NODE *to_add);
void init_node(void *data,
                NODE *new_node,
                size_t data_size);
int remove_node(void);
void init_llist(LLIST *new_list);
int empty_list(void);

#endif
