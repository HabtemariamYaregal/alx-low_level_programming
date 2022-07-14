#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements
 * @h: constant structure
 * Return: the number of nodes
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{
size_t counter = 0;
while(h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
}
h = h->next;
counter++;
}
return (counter);
}
