#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - print the nth node
 * @head: add of linked list
 * @index: the index of the node
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
while (head)
{
if (i == index)
{
return (head);
}
head = head->next;
i++;
}
return (NULL);
}
