#include "dog.h"

/**
 * init_dog - sturcttasdasdsadasdsadas
 * @d: nameasdasdasdsad
 * @name: ageasdasdasdasdsad
 * @age: ownerasdasdasdasdasdsada
 * @owner: ageasdasdasdasdsad
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
}
