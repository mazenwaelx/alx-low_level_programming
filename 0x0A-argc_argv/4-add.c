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
int i, sum;
for (i = 0; i < argc; i++)
{
if (argv(argc) < '0' || argv(argc) > '9')
{
printf("Error\n");
return (1);
}
else
{
sum += atoi(argv[i]);
}
}
printf("%d\n", sum);
return (0);
}
