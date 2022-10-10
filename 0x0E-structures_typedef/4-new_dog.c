#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - determines the length of a string
 *
 * @str: <string>
 *
 * Return: <int>
 */

int str_len(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string pointed to by src
 *
 * @dest: destination of string to copy
 * @src: source of the string to copy
 *
 * Return: pointer
 */

char *_strcopy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;

	return (dest);
}

/**
 * new_dog - creates a new `dog` of type `dog`
 *
 * @name: name of the dog <string>
 * @age: age of the dog <float>
 * @owner: owner's name of the dog <string>
 *
 * Return: NULL (Fail) || pointer to `dog` type
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);

	_dog->name = malloc(sizeof(char) * (str_len(name) + 1));
	if (_dog->name == NULL)
	{
		free(_dog->name);
		return (NULL);
	}

	_dog->owner = malloc(size(char) * (str_len(owner) + 1));
	if (_dog->owner == NULL)
	{
		free(_dog->owner);
		return (NULL);
	}

	_dog->name = _strcopy(dog->name, name);
	_dog->owner = _strcopy(dog->owner, owner);
	_dog->age = age;

	return (_dog);
}
