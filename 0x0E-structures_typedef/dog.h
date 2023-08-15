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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif /* DOG_H */
