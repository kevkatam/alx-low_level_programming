#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: struct dog or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, namel, ownerl;

	p_dog = malloc(sizeof(*p_dog));

	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}
	for (namel = 0; name[namel]; namel++)
		;
	for (ownerl = 0; owner[ownerl]; ownerl++)
		;
	p_dog->name = malloc(namel + 1);
	p_dog->owner = malloc(ownerl + 1);

	if (!(p_dog->name) || !(p_dog->owner))
	{
		free(p_dog->name);
		free(p_dog->owner);
		free(p_dog);
		return (NULL);
	}
	for (i = 0; i < namel; i++)
	{
		p_dog->name[i] = name[i];
	}
	p_dog->name[i] = '\0';
	p_dog->age = age;

	for (i = 0; i < ownerl; i++)
	{
		p_dog->owner[i] = owner[i];
	}
	p_dog->owner[i] = '\0';
	return (p_dog);
}
