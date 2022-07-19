#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - prints the linked list
 * @head: head of linked list
 * Return: the address of newly added element
 * Description: singly linked list node structure
 */

size_t print_listint_safe(const listint_t *head)
{
size_t count = 0;
long int count1;
while (head)
{
count1 = head - head->next;
count++;
printf("[%p] %d\n", (void *)head, head->n);
if (count1 > 0)
{
head = head->next;
}
else
{
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
break;
}
}
if (!head)
exit(98);
return (count);
}
