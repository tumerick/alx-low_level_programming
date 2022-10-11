#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - determines the length of a given string
 *
 * @str: <string>
 *
 * Return: <int>
 */

int _strlen(char *str)
{
	int idx = 0;

	for (; str[idx]; idx++)
		;

	return (idx);
}

/**
 * _strcpy - copies a <string> pointed to by `src`
 * includes the terminating null byte
 *
 * @src: source of the <string> to copy
 * @dest: destination of the <string> to copy
 *
 * Return: dest
 */

char *_strcpy(char *src, char *dest)
{
	int idx = 0;

	for (; src[idx]; idx++)
		dest[idx] = src[idx];

	dest[idx] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new `dog` of type `dog_t`
 *
 * @name: name of the dog <string>
 * @age: age of the dog <float>
 * @owner: owner's name of the dog <string>
 *
 * Return: NULL || struct `dog`
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;

	if (!(owner) || !(name))
		return (NULL);

	_dog = malloc(sizeof(*_dog));
	if (_dog == NULL)
	{
		free(_dog);
		return (NULL);
	}

	_dog->name = malloc(_strlen(name) + 1);
	_dog->owner = malloc(_strlen(owner) + 1);

	if (!(_dog->name) || !(_dog->owner))
	{
		free(_dog->name);
		free(_dog->owner);
		free(_dog);
		return (NULL);
	}

	_dog->age = age;
	_dog->name = _strcpy(name, _dog->name);
	_dog->owner = _strcpy(owner, _dog->owner);

	return (_dog);
}
