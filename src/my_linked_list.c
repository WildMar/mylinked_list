#include <stdio.h>
#include <stdlib.h>

#include "my_linked_list.h"


// add node to linked list
int add_node(NODE *head, NODE *to_add)
{
    NODE *current = head;
    NODE *prev = head;
    if(head == NULL)
    {
        fprintf(stderr, "No linked list to \
                        add node to");
        return -1;
    }
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
    
    return 0;
}

int remove_node(NODE *head, void *to_remove, 
                int (func)(void *, void *))
{
    printf("REMOVING NODE\n");
    NODE *current = head;
    NODE *previous = head;
    
    while(1)
    {
        // user must create compare data function
        if((func)(to_remove, current->data) == 0)
        {
            printf("Found the one to remove!\n");
            //remove it
            previous->next = current->next;
            current->next->previous = previous;
            current->next = NULL;
            current->previous = NULL;
            return 0;
        }
        previous = current;
        current = current->next;
        
    }
    printf("Couldn't find the one to remove :C\n");
    
    return -1;
}

// initialize node and it's pointers
void init_node(void *data, NODE *new_node)
{
    if(data == NULL)
    {
        fprintf(stderr, "Data is empty. Creating empty Node\n");
    }
    new_node->data = data;
    new_node->next = NULL;
    new_node->previous = NULL;
}

// print the contents of the linked list using
// user-defined function pointer
int print_list(NODE *head, void (func)(void *))
{
    NODE *tmp = malloc(sizeof(NODE));

    tmp = head;
    if(tmp == NULL)
    {
        fprintf(stderr, "head node is NULL; \
                    possible error with malloc\n");
        return -1;
    }
    while(tmp != NULL)
    {
        (func)((tmp->data));
        tmp = tmp->next;
    }
    free(tmp);
    return 0;
}


int empty_list()
{
    printf("EMPTYING LIST\n");
    return 0;   
}



