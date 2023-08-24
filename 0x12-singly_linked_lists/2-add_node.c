#include "lists.h"

/**
 * add_node - adds a new node at the beginning of list_t
 * @head: head of the node
 * @str: sting
 * Return: the address of the new element or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
size_t i = 0;
list_t *new;

new = (list_t *)malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);

for (i = 0; str[i] != '\0'; i++);

new->len = i;
new->next = *head;
*head = new;

return (*head);
}
