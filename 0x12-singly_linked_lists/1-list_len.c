#include "lists.h"
/**
 * list_len - lol
 * @h: lol
 *
 * Return: always 0
*/


size_t list_len(const list_t *h)
{
size_t i = 0;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
