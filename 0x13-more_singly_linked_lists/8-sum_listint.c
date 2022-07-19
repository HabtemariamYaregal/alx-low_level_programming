#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - the sum of all datas
 * @head: head of linked list
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

int sum_listint(listint_t *head)
{
int total = 0;
if (head == NULL)
{
return (0);
}
while (head)
{
total = total + head->n;
head = head->next;
}
return (total);
}
