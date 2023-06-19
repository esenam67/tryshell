#include "dog.h"

/**
 *  init_dog - check function
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * @d: ponter to dog
 * Description:  a function that initialize a variable of type
 * struct dog
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;

}
