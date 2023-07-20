#include <stdio.h>
#include "main.h"

/**
 * more_numbers - bbe
 *
*/

void more_numbers(void)
{
int num, count = 1, num2;

while(count <= 10){
for (num = 0; num <= 14; num++)
{
num2 = num;
if (num > 9)
{
_putchar(1 +48)
num2 = num % 10;
}
_putchar(num2 + 48);
}
count++;
}
_putchar('\n');
}
