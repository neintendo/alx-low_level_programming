#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog identities.
 *
 * @name: the dog's name.
 * @age: the dog's age.
 * @owner: the dog's owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
