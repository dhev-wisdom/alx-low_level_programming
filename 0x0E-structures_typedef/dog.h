#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
