#include "main.h"
#include <stdlib.h>

/**
 * _strdup - bbe
 * @str: ff
 * Return: Always 0
*/
char *_strdup(char *str)
{
int len = 0;
int i;

char *duplicate;
if (str == NULL)
{
return (NULL);
}
while (str[len] != '\0')
{
len++;
}
duplicate = (char *)malloc((len + 1) * sizeof(char));
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
