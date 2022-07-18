#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - frees a list_t list
 * @head: one linked list element
 * Return: nothing
 * Description: singly linked list node structure
 */

void free_listint2(listint_t **head)
{
listint_t *tempo;
if (head == NULL)
{
return;
}
while (*head)
{
tempo = (*head)->next;
free(*head);
*head = tempo;
}
}
