#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - nth node of the list
 * @head: head node
 * @index: numbering of the node
 * Return: the nth node of the list
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
listint_t *point = NULL;

while (head != NULL)
{
if (count <= index)
{
if (count == index)
{
point = head;
break;
}
count++;
head = head->next;
}
else
return (NULL);
}
return (point);
}
