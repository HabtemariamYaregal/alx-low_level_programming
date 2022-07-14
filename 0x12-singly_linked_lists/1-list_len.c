#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - print number of elements
 * @h: constant structure
 * Return: the number of elements
 * Description: singly linked list node structure
 */

size_t list_len(const list_t *h)
{
size_t counter = 0;
while(h != NULL)
{
h = h -> next;
counter++;
}
return (counter);
}
