#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *  free_dog - function that frees dogs
 *  @d: pointer to string
 *  @name: name
 *  @owner: owner
 *  Return: NULL
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
free(d->name);
}
if (d->owner != NULL)
{
free(d->owner);
}
free(d);
}
}
