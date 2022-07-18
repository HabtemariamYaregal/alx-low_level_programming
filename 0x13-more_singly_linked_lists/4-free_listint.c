#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list
 * @head: one linked list element
 * Return: nothing
 * Description: singly linked list node structure
 */

void free_listint(listint_t *head)
{
listint_t *tempo;
while (head)
{
tempo = head->next;
free(head);
head = tempo;
}
}
