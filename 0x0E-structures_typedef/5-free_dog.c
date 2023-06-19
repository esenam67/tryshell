#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - check function
 * @d: pointer to dog_t
 * Description: a function that frees dogs.
 *
 * Return: nothing 
 */

void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}

