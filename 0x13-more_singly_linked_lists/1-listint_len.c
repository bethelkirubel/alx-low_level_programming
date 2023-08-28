#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints number of elements
 * @h: string where the lists is  printed upon
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
