#include "function_pointers.h"
/**
 * array_iterator - bbe
 * @array: ff
 * @size: gg
 * @action: gg
 * Return: Always 0
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
if (array && size && action)
for (i = 0; i < size; i++)
action(array[i]);
}