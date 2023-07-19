#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{
int i = 0;
char ch = 'a';
while (i < 10)
{
while (ch < 'z')
{
_putchar(ch);
ch++;
}
i++;
}
_putchar('\n');
}
