#ifndef _DOG_H_FILE
#define _DOG_H_FILE

/**
 *struct dog - information about dogs
 *@name: dog name
 *@age: dog age
 *@owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
