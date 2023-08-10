#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - bbe
 * @s1: ff
 * @s2: ff
 * @n: lol
 * Return: Always 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
unsigned int s1_len = 0;
unsigned int s2_len = 0;

while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;
if (n >= s2_len)
n = s2_len;
char *result = malloc((s1_len + n + 1) * sizeof(char));
if (result == NULL)
return (NULL);
char *ptr = result;
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
*ptr = '\0';
return (result);
}


