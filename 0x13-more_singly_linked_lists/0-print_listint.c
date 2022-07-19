#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - print all elements
 * @h: constant structure
 * Return: the number of nodes
 * Description: singly linked list node structure
 */

size_t print_listint(const listint_t *h)
{
size_t counter = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
