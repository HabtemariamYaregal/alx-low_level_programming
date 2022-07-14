#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: one linked list element
 * Return: nothing
 * Description: singly linked list node structure
 */

void free_list(list_t *head)
{
list_t *tempo;
while (head)
{
tempo = head->next;
free(head->str);
free(head);
head = tempo;
}
}
