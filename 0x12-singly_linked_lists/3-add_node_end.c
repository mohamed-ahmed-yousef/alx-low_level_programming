#include "lists.h"

/**
 * add_node_end - Add node to the end.
 * @head: the head of the node.
 * @str: string.
 * Return: return the linkedlist.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *store = malloc(sizeof(list_t));
list_t *linked_list;
unsigned int len = 0;

while (str[len])
len++;

store->len = len;
store->str = strdup(str);
store->next = NULL;

if (*head == NULL)
*head = store;
else
{
linked_list = *head;

while (linked_list->next != NULL)
linked_list = linked_list->next;
linked_list->next = store;

}
return (store);
}
