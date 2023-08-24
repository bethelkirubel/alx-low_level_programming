#include "lists.h"

/**
 * print_list - prints the list along with its size
 * @h:head node in singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t num_nod = 0;

while (h != NULL)
{
if (h->str == NULL)
{
printf("[%d] %s\n", 0, "(nill)");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
num_nod++;
h = h->next;
}
return (num_nod);
}
