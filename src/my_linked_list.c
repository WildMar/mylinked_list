#include <stdio.h>
#include <stdlib.h>

#include "my_linked_list.h"

void add_node(LLIST *dest, NODE *to_add)
{
    if((*dest).head == NULL && (*dest).tail == NULL)
    {
        // this is an empty list. 
        (*dest).head = (to_add);
        (*dest).tail = (to_add);
        return;
    }

    (*dest).tail = (to_add);
}

int remove_node()
{
    printf("REMOVING NODE\n");
    return 0;
}

void init_node(void *data, NODE *new_node, size_t data_size)
{
    NODE *temp_node = malloc(data_size);
    temp_node->data = data;
    temp_node->next = NULL;
    temp_node->previous = NULL;
    
    (*new_node) = *temp_node;
}

void init_llist(LLIST *new_list)
{
    printf("CREATING LIST\n");
    LLIST *temp_list = malloc(sizeof(LLIST));
    temp_list->head = NULL;
    temp_list->tail = NULL;
    (*new_list) = *temp_list;
}

void print_list(LLIST *to_print, void (*func)(void *))
{
    NODE *tmp = (*to_print).head;
    while(tmp != NULL)
    {
        (*func)(tmp->data);
        tmp = tmp->next;
    }
}


int empty_list()
{
    printf("EMPTYING LIST\n");
    return 0;   
}



