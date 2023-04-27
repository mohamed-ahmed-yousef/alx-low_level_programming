#include "lists.h"

/**
 * list_len - return length of linked list.
 * @h: the linked list
 * Return: no. of element in linked list.
*/
size_t list_len(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
h = h->next;
n++;
}

return (n);
}
