#include "main.h"
#include <stdlib.h>

/**
 * _strdup - bbe
 * @str: ff
 * Return: Always 0
*/
char *_strdup(char *str)
{
if (str == NULL)
{
return (NULL);
}
size_t len = 0;
size_t i;
while (str[len] != '\0')
{
len++;
}
char *duplicate = (char *)malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
{
duplicate[i] = str[i];
}
return (duplicate);
}
