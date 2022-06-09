#include "lists.h"



/**
 * print_dlistint - print elements of a doubly linked list
 * @h: constant pointer to the head
 *
 * Description: prits out lst in doubly linked
 *
 * Return: number of items in the list
 */

size_t print_dlistint(const dlistint_t *h)
{


dlistint_t *temp = h->next->prev;
size_t count = 0;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
count++;
}
return (count);
}
