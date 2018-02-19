#include <stdio.h>
#include "dog.h"
/**
 * init_dog
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
  d->name = name;
  d->age = age;
  d->owner = owner;
}
