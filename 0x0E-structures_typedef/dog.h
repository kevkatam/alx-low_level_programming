#ifndef DOG_H
#define DOG_H
/**
 * dog_t - a new name for the type struct dog
 */
typedef struct dog dog_t;


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
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
