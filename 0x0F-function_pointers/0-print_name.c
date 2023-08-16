#include "function_pointers.h"

/**
 * print_name - bbe
 * @name: ff
 * @f: gg
 * Return: Always 0
*/
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
