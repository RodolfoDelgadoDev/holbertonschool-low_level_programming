#ifndef A
#define A
/**
 * struct dog - sturcttasdasdsadasdsadas
 * @name: nameasdasdasdsad
 * @age: ageasdasdasdasdsad
 * @owner: ownerasdasdasdasdasdsada
 **/
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
#ifndef B
#define B
/**
 * init_dog - sturcttasdasdsadasdsadas
 * @d: nameasdasdasdsad
 * @name: ageasdasdasdasdsad
 * @age: ownerasdasdasdasdasdsada
 * @owner: ageasdasdasdasdsad
 **/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
#ifndef C
#define C
/**
 * print_dog - sturcttasdasdsadasdsadas
 * @d: ageasdasdasdasdsad
 **/
void print_dog(struct dog *d);
#endif
#ifndef D
#define D
typedef struct dog dog_t;
#endif
#ifndef E
#define E
dog_t *new_dog(char *name, float age, char *owner);
#endif
#ifndef F
#define F
void free_dog(dog_t *d);
#endif
