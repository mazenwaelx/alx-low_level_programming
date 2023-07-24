#include "main.h"

/**
 * puts2 - bbe
 * @str: ff
 * Return: Always 0
*/

void puts2(char *str)
{
int i = 0;
if (str)
{
while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}
}
_putchar('\n');
}
