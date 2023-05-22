[8:25 pm, 22/05/2023] +234 812 220 4393: #include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* init_dog - a function that initialize a variable of type struct dog
* @d: a pointer to the struct dog
* @name: a string 'name'
* @age: a float 'age'
* @owner: a string 'owner'
* Return: returns nothing
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
[8:26 pm, 22/05/2023] Purple Gleam collection: This pls
[8:33 pm, 22/05/2023] +234 812 220 4393: #include <stdlib.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: a string 'name'
* @age: a float 'age'
* @owner: a string 'owner'
* Return: returns a pointer to a struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, c = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->age = age;

	for (i = 0, c = 0; name[i] != '\0'; i++)
		c++;
	newDog->name = malloc(sizeof(char) * (c + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(newDog->name + i)) = name[i];
		if (name[i] == '\0')
			break;
	}

	for (i = 0, c = 0; owner[i] != '\0'; i++)
		c++;
	newDog->owner = malloc(sizeof(char) * (c + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}

	for (i = 0; 1 ; i++)
	{
		(*(newDog->owner + i)) = owner[i];
		if (owner[i] == '\0')
			break;
	}

	return (newDog);
}
