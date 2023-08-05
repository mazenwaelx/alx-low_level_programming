#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates the minimum number of coins required to make change for an amount of money
 * @argv: Command-line arguments
 * @argc: Number of command-line arguments
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int cents;

cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
int quarters;

quarters = cents / 25;
cents -= quarters * 25;
int dimes;

dimes = cents / 10;
cents -= dimes * 10;
int nickels;

nickels = cents / 5;
cents -= nickels * 5;
int pennies;

pennies = cents;
printf("%d\n", quarters + dimes + nickels + pennies);
return (0);
}
