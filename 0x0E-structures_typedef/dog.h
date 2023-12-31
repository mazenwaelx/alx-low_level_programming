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
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
