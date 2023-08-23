#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct nodes
{
   int len;
   char *str;
   struct nodes *next;
}node;

node *head=NULL;

void insertatend(int len, char *str)
{
   node *store= malloc(sizeof(node));
 

   store->len = len;
   store->str = strdup(str);
   node *linked_list =  head;

   if (head == NULL) {
      head = store;
   } else {
      node *linked_list = head;
      while (linked_list->next != NULL)
         linked_list = linked_list->next;
      linked_list->next = store;
   }
}
void printList()
{
   node *s = head;
   while (s)
   {
      printf("%d %s\n",s->len, s->str);
      s  = s->next;
   }
}
void main(){
   int k=0;
   // insertatbegin(12,"mohamed");
   insertatend(22,"mohamed");
   printf("Linked List: ");
   
   // print list
   printList();
}