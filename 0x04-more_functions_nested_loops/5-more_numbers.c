#include <stdio.h>
#include "main.h"

/**
 * more_numbers - bbe
 *
*/

void more_numbers(void)
{
int num, count;

while(count <= 10){
for (num = 0; num <= 14; num++)
{
_putchar(num + 48);
}
count++;
}
_putchar('\n');
}
