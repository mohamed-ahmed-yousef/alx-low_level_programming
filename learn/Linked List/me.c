#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

void insert(int data)
{
    struct node *store = malloc(sizeof(struct node));
    store->data = data;
    store->next = head;
    head = store;
}

void print()
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d\n", p -> data);
        p = p -> next;
    }
    
}
int main()
{
    insert(10);
    insert(20);
    insert(40);
    insert(50);
    print();
}

