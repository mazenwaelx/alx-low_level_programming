#include <stdio.h>
#include <stdlib.h>
/**
 * main - Enter point
 *
 * Description: aa
 * @argv: lol
 * @argc: beo
 * Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int sum = 0;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
{
if (*c < '0' || *c > '9')
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[argc]);
}
printf("%d\n", sum);
return (0);
}
