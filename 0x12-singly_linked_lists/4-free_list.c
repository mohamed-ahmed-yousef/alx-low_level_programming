#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the linked list.
 * @head: the head of linked list passed.
*/
void free_list(list_t *head)
{
list_t *store;

while (head)
{
store = head->next;
free(head->str);
free(head);
head = store;
}
}
