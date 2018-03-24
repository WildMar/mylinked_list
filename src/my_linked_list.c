#include <stdio.h>
#include <stdlib.h>

#include "my_linked_list.h"

void add_node(NODE *head, NODE *to_add)
{
    NODE *current = head;
    NODE *prev = head;
    if(head == to_add)
    {
        // this is the first element
        return;
    }
    
    if(head->next == NULL)
    {
        // this is the second element
        head->next = to_add;
    }
    else
    {
        while(current != NULL)
        {
            // go to the end of the list
            prev = current;
            current = current->next;
        }
    }
    prev->next = to_add;
    to_add->previous = prev;
    to_add->next = NULL;
}

int remove_node()
{
    printf("REMOVING NODE\n");
    return 0;
}

void init_node(void *data, NODE *new_node, size_t data_size)
{
    new_node->data = data;
    new_node->next = NULL;
    new_node->previous = NULL;
}

void print_list(NODE *head, void (func)(void *))
{
 
    NODE *tmp = malloc(sizeof(NODE));
    tmp = head;
    if(tmp == NULL)
    {
        printf("NULL\n");
        return;
    }
    while(tmp != NULL)
    {
        (func)((tmp->data));
        tmp = tmp->next;
    }
}


int empty_list()
{
    printf("EMPTYING LIST\n");
    return 0;   
}



