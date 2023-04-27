#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all element in the linked list.
 * @h: linked list passed.
 * Return: return the no.of element in struct.
*/

size_t print_list(const list_t *h)
{
size_t n = 0;

while (h != NULL)
{
if (h->str)
printf("[%u] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
h = h->next;
n++;
}
return (n);
}
