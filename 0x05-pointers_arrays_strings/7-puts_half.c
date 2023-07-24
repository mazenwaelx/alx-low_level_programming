#include "main.h"

/**
 * puts_half - bbe
 * @str: ff
 * Return: Always 0
*/

void puts_half(char *str)
{
int len = 0, i;
while (str[len] != '\0')
len++;
for (i = len / 2; i < len; i++)
if (len % 2 != 0)
{
_putchar(str[i + 1]);
}
else
_putchar(str[i]);
}
