#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of linked list
 * @index: index to be deleted
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempo = *head;
listint_t *now = NULL;
unsigned int i = 0;
if (*head == NULL)
{
return (-1);
}
if (index == 0)
{
*head = (*head)->next;
free(tempo);
return (1);
}
while (i < index - 1)
{
if (!tempo || !(tempo->next))
{
return (-1);
}
tempo = tempo->next;
i++;
}
now = tempo->next;
tempo->next = now->next;
free(now);
return (1);
}
