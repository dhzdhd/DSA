#include <stdio.h>
#include <malloc.h>

struct node
{
    int value;
    struct node *next;
};

typedef struct node node;


node *append_to_list(int element) {
    node *new_node = calloc(1, sizeof(node));
    new_node->value = element;
    new_node->next = NULL;
    return new_node;
}

int main(void) 
{
    node *first = append_to_list(2);
    printf("%d\n", first->value);
    return 0;
}