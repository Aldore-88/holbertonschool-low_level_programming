#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - string duplicate with allocated mem
 * @str: string
 * Return: new_string
 *
 */
char *_strdup(char *str)
{
	int max;
	char *new_string;
	int i;

	if (str == NULL)
	{ /*if NULL is passed into string*/
		return (NULL);
	}

	max = 0;

	while (str[max] != '\0')
	{
		max = max + 1;
	}

	new_string = malloc(sizeof(char) * (max + 1));

	if (new_string == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i <= max)
	{
		new_string[i] = str[i];
		i = i + 1;
	}

	return (new_string);
}

/**
 * new_dog - copy of parameters
 * @name: name
 * @age: age
 * @owner: owner
 * Return: n_dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/*
	 * do i need to malloc?? storing a copy of
	 * name and age for string i will need to get the length
	 */
	dog_t *n_dog;

	n_dog = malloc(sizeof(dog_t));
	/*this dynamically allocates to the size of the struc at compile time?*/
	if (n_dog == NULL)
	{
		return (NULL);
	}

	n_dog->name = _strdup(name);
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	n_dog->age = age;

	n_dog->owner = _strdup(owner);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	/*remember to free each level*/

	return (n_dog);
}
