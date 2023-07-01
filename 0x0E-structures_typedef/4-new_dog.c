#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function to create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *max;
	int nombre = 0, papa = 0;

	if (name != NULL && owner != NULL)
	{
		nombre = strlen(name) + 1;
		papa = strlen(owner) + 1;
		max = malloc(sizeof(dog_t));

		if (max == NULL)
			return (NULL);
		max->name = malloc(sizeof(char) * nombre);

		if (max->name == NULL)
		{
			free(max);
			return (NULL);
		}
		max->owner = malloc(sizeof(char) * papa);

		if (max->owner == NULL)
		{
			free(max->name);
			free(max);
			return (NULL);
		}
		max->name = strcpy(max->name, name);
		max->owner = strcpy(max->owner, owner);
		max->age = age;
	}
	return (max);
}
