#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	/* Allocate memory for the new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner */
	new_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	/* Copy the name and owner to the new memory */
	strcpy(new_name, name);
	strcpy(new_owner, owner);

	/* Set the dog's attributes */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	/* Return the new dog */
	return (new_dog);
}

