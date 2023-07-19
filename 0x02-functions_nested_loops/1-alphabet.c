#include "main.h"

/**
 * main - check the code
 *
 * print_alphabet - utilizes on the _putchar function to print
 * the alphabet a -z
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char ch = 'a';
while (ch < 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');


}
