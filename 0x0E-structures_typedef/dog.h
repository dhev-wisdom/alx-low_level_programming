#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - A new type describing a dog.
 * @name: Member 1.
 * @age: Member 2.
 * @owner: Member 3.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog.
 */

typedef struct dog dog_t;

void(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
