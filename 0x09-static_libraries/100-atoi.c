#include "main.h"

/**
 * _atoi - bbe
 * @s: ff
 * Return: Always 0
*/

int _atoi(char *s)
{
unsigned int sign = 1;
unsigned int num = 0;

while (*s != '\0')
{
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = num * 10 + (*s - '0');
else if (num > 0)
break;
s++;
}
return (num *sign);
}
