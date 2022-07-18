#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint_end - add a new node at end
 * @head: add of linked list
 * @n: integer to be added
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *added;
listint_t *tempo = *head;
added = malloc(sizeof(listint_t));
if (added == NULL)
{
return (NULL);
}
added->n = n;
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
