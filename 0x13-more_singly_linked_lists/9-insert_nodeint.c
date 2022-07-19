#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - the sum of all datas
 * @head: head of linked list
 * @idx: index to be added
 * @n: value to be added
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *added;
listint_t *tempo = *head;
added = malloc(sizeof(listint_t));
if (!added || !head)
{
return (NULL);
}
added->n = n;
added->next = NULL;
if (idx == 0)
{
added->next = *head;
*head = added;
return (added);
}
for (i = 0; tempo && i < idx; i++)
{
if (i == idx - 1)
{
added->next = tempo->next;
tempo->next = added;
return (added);
}
else
{
tempo = tempo->next;
}
}
return (NULL);
}
