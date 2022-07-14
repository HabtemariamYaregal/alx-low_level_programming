#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node_end - add a new node at first
 * @head: add of linked list
 * @str: string to be added
 * Return: the number of elements
 * Description: singly linked list node structure
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *added;
list_t *tempo = *head;
unsigned int count = 0;
while (str[count])
{
count++;
}
if (str == NULL)
{
return (NULL);
}
added = malloc(sizeof(list_t));
if (added == NULL)
{
return (NULL);
}
added->str = strdup(str);
if (added->str == NULL)
{
free(added);
return (NULL);
}
added->len = count;
added->next = NULL;
if (*head == NULL)
{
*head = added;
return (added);
}
while (tempo->next)
{
tempo = tempo->next;
}
tempo->next = added;
return (added);
}
