#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length
 * @s: array of char
 * Return: lenght
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * _strcpy - cpy from src to dest
 * @src: pointer to string we want to copy
 * @dest: pointer to place we want to copy in it
 * Return: 0
 */
char *_strcpy(char *src, char *dest)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	i++;
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: pointer to name
 * @age: dog's age
 * @owner: pointer to owner name
 * Return: pointer to new dog
 *         null if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * _strlen(name) + 1);
	if (dog->name == 0)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (dog->owner == 0)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(name, dog->name);
	dog->age = age;
	_strcpy(owner, dog->owner);

	return (dog);
}
