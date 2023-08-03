#include "main.h"

/**
 * is_palindrome - bbe
 * @s: ff
 * Return: Always 0
*/

int is_palindrome(char *s)
{
int len = strlen(s);
if (len == 0)
{
return (1);  
}
char *start = s;
char *end = s + len - 1;
while (start < end)
{
if (*start != *end)
{
return (0);  
}
start++;
end--;
}
return (1);  
}
