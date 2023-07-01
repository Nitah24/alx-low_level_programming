#ifndef _HEADER_
#define _HEADER_


/**
 * struct dog - stucture woth dog details
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: newy name for truct dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
