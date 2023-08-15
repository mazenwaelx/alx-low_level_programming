#include <stdio.h>

#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Entry point
 *
 * @name: bbe
 * @age: bo
 * @owner: bo
 *
 * Return: Always 0
*/
struct dog
{
char *name;
float age;
char *owner;
};

#endif /* DOG_H */
/**
 * init_dog - Entry point
 *
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
