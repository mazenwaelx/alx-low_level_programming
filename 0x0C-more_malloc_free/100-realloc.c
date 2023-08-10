#include "main.h"
#include <stdlib.h>

/**
 * _realloc - bbe
 * @ptr: ff
 * @old_size: gg
 * @new_size: gg
 * Return: Always 0
*/


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned char *byte_ptr, *new_byte_ptr, size, i;
void *new_ptr = malloc(new_size);
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == old_size)
{
return (ptr);
}
if (new_ptr != NULL)
{
byte_ptr = (unsigned char *)ptr;
new_byte_ptr = (unsigned char *)new_ptr;
size = old_size < new_size ? old_size : new_size;
for (i = 0; i < size; i++)
{
new_byte_ptr[i] = byte_ptr[i];
}
}
free(ptr);
return (new_ptr);
}
