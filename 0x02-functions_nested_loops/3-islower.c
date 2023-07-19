#include "main.h"
/**
 * _islower - chekcs if character is a letter
 * is lowercase
 *
 * @c: takes input from other function
 *
 * Return: 1 is 'c' is lowercase if ture else 0;
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
