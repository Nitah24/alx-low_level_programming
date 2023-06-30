#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - strycture with dog details
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: data structure containing data about dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
