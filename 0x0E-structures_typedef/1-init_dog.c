#include "dog.h"
/**
 * init_dog - Entry point
 * @d: bo
 * @name: bbe
 * @age: bgf
 * @owner: go
 * Return: Always 0
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
