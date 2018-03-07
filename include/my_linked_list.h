#ifndef MY_LINKED_LIST_H
    #define MY_LINKED_LIST_H
    
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


int add_node(void);
int remove_node(void);
int create_list(void);
int empty_list(void);

#endif
