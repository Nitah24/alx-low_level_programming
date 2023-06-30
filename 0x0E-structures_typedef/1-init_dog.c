#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - funtion to intitiakize a variable
 * @d: pointer to variable
 * @name: name of dog
 * @age: age of dog
 * @owner: oenwer of dog
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));

	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
