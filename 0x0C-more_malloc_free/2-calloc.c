#include "main.h"
#include <stdlib.h>
/**
 * _calloc - bbe
 * @nmemb: ff
 * @size: gg
 * Return: Always 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned char *byte_ptr, total_size, i;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(nmemb * size);
if (ptr != NULL)
{
byte_ptr = (unsigned char *)ptr;
total_size = nmemb * size;
for (i = 0; i < total_size; i++)
{
byte_ptr[i] = 0;
}
}
return (ptr);
}
