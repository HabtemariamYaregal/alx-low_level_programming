#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_nodeint - add a new node at first
 * @head: add of linked list
 * @n: integer to be added
 * Return: the address of new element
 * Description: singly linked list node structure
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *added;
added = malloc(sizeof(listint_t));
if (added == NULL)
{
return (NULL);
}
added->n = n;
added->next = *head;
*head = added;

return (*head);
}
