#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements in listint_t lists
 * @h: points to the head
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
size_t i = 0;

while (h)
{
printf("%d\n", h->n);
i++;
h = h->next;
}
return (i);
}
