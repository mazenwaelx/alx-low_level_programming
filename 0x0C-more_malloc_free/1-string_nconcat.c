#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - bbe
 * @s1: ff
 * @s2: ff
 * @n: ff
 * Return: Always 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
char *ar;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
unsigned int len1, len2, i;
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
if (n >= len2)
n = len2;
ar = malloc((len1 + n + 1) * sizeof(char));
if (ar == NULL)
return (NULL);
ptr = ar;
while (*s1 != '\0')
{
*ptr = *s1;
ptr++;
s1++;
}
while (n > 0)
{
*ptr = *s2;
ptr++;
s2++;
n--;
}
return (ar);
}
