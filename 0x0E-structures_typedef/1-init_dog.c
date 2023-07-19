#include "dog.h"

/**
 * init_dog - initialze a dog
 * @d: init
 * @name: name
 * @age: age
 * @owner: name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
