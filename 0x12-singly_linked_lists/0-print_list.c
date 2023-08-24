#include "lists.h"
///#include "lists.h"
/**
 * print_list - lol
 * h: lol
 * 
 * Return: always 0
*/

typedef struct list {
    char *str;
    struct list *next;
} list_t;

size_t print_list(const list_t *h)
{
size_t count = 0;
if (h == NULL)
{
printf("[0] (nil)\n");
return (count);
}
printf("[");
while (h != NULL)
{
printf("%s", h->str);
count++;
if (h->next != NULL)
printf(", ");
h = h->next;
}
printf("]\n");
return (count);
}
