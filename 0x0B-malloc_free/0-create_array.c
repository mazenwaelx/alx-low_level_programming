#include <stdlib.h>
#include "main.h"

/**
 * create_array - bbe
 * @size: ff
 * @c: gg
 * Return: Always 0
*/
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size <= 0)
return (NULL);
if (ar == NULL)
return (NULL);
ar = (char *)malloc(size * sizeof(char));
for (i = 0; i < size; i++)
ar[i] = c;
return (ar);
}
