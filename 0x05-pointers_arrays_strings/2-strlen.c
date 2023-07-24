#include <stdio.h>
#include "main.h"


/**
 * _strlen - bbe
 * @s: gg
 * Return: Always 0
*/

int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return (len);
}
