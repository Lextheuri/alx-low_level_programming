#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *  new_dog - function that creates a new dog
 *  @name: name
 *  @age: age
 *  @owner: owner
 *  Return: pointer to the struct else NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
{
return (NULL);
}
newDog->name = strdup(name);
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->age = age;
newDog->owner = strdup(owner);
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
return (newDog);
}
