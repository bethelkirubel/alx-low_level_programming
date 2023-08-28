#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints all elements in listint_t lists
 * @h: string where we list it
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
size_t i;
if (h == NULL)
	return (1);
for (i = 0; h; i++)
{
printf("%d\n", h->n);
h = h->next;
}
return (i);
}
