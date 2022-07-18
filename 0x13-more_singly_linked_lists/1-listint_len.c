#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - print all elements
 * @h: constant structure
 * Return: the number of nodes
 * Description: singly linked list node structure
 */

size_t listint_len(const listint_t *h)
{
size_t counter = 0;
while(h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
