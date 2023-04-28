#include "lists.h"
#include <string.h>
/**
 * add_node - to insert node at the begining of linked list
 * @head: head pointer
 * @str: string to add to linked list.
 * Return: head
*/
list_t *add_node(list_t **head, const char *str)
{
unsigned int len = 0;
list_t *store = malloc(sizeof(list_t));

while (str[len] != '\0')
len++;


if (store == NULL)
return (NULL);

store->str = strdup(str);
store->len = len;
store->next = *head;

*head = store;

return (*head);
}
