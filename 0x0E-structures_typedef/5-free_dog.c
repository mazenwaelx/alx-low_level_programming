#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Entry point
 * @d: bbe
 * Return: Always 0
*/


void free_dog(dog_t* d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
