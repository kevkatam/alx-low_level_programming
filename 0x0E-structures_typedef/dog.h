#ifndef DOG_H
#define DOG_H

/**
 * dog_i - typedef for struct dog
 */
typedef struct dog dog_i;

/**
 * struct dog - struct that stores dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Desxription: a struct named dog that stores dog's name, age and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

endif;
