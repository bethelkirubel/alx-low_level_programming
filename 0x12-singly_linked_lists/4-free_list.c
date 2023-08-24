#include "lists.h"

/**
 * free_list - free list_t list
 * @head: head node
 */

void free_list(list_t *head)
{
list_t *nuevo, *next;

nuevo = head;

while (nuevo != NULL)
{
next = nuevo->next;
free(nuevo->str);
free(nuevo);

nuevo = next;
}
}
