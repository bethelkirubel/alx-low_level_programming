#include "lists.h"
/**
 * add_node_end - adds new node at the end
 * @head: head node
 * @str:string
 * Return: address of the new element or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
size_t i;
list_t *new, *ptr;

new = (list_t *)malloc(sizeof(list_t));
if (new == NULL)
return (NULL);

new->str = strdup(str);

for (i = 0; str[i]; i++)
	;
new->len = i;
new->next = NULL;
ptr = *head;

if (ptr == NULL)
*head = new;
else
{
while (ptr->next != NULL)

ptr = ptr->next;

ptr->next = new;
}
return (*head);
}


