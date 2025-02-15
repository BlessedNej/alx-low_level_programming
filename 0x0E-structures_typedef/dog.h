#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: No description for this struct
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_b - typedef for struct dog
 */
typedef struct dog dog_b;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
