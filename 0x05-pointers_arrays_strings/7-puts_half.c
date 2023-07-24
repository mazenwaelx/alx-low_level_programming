#include "main.h"

/**
 * puts_half - bbe
 * @str: ff
 * Return: Always 0
*/

void puts_half(char *str)
{
int i = 0, len = 0;
if (str)
{
while (str[i] != '\0')
{
len++;
i++;
}
i = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}
_putchar('\n');
}
