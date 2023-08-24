#include "lists.h"
/**
 * list_len - lists the number of elements of list_len
 * @h: head node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
size_t i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
