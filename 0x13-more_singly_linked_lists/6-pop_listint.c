#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - delete the head node
 * @head: add of linked list
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

int pop_listint(listint_t **head)
{
listint_t *tempo;
int count;
if (!head || !*head)
{
return (0);
}
count = (*head)->n;
tempo = (*head)->next;
free(*head);
*head = tempo;
return (count);
}
