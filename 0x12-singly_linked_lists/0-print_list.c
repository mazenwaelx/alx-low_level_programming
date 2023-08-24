#include "lists.h"
/**
 * print_list - lol
 * @h: lol
 *
 * Return: always 0
*/


size_t print_list(const list_t *h)
{
size_t count = 0;
while (h != NULL)
{
if (h != NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->str);
count++;
h = h->next;
}
return (count);
}
