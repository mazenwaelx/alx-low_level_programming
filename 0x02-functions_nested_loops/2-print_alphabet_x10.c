#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet 10 times
 *
*/
void print_alphabet_x10(void)
{

int i;
char ch = 'a';
for (i = 0; i < 20; i++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}
putchar('\n');
}
