#include <stdio.h>
#include <stdlib.h>

struct list_head
{
    struct list_head *next;
    struct list_head *previous;
};
typedef struct list_head LIST_HEAD;


struct linked_list
{
    void *data;
    struct list_head list; //list structure
};
typedef struct linked_list LLIST;


int add_node()
{
    return 0;
}

int remove_node()
{
    return 0;
}

int create_list()
{
    return 0;
}

int empty_list()
{
    return 0;   
}



