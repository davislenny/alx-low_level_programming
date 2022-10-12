#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicates string param
 * @str: the string
 * Return: pointer to the duplicated string
 * or NULL if insufficient memory is available
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *s;
	if (!str)
		return (NULL);
	while (*str++)
		i++;

	s = malloc((i + 1) * sizeof(char));

	if (!s)
		return (NULL);

	for (i++; i--;)
		s[i] = *--str;
	return (s);
}
/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: god age
 * @owner: dog owner
 * Return: pointer to dog info
 */
dog_t *new_dog(char *name, float age char *owner)
{
	dot_t *pr = malloc(sizeof(dog_t));

	if (!pr)
		return (NULL);
	pr->name = _strdup(name);
	if (name && !pr->name)
		return (free(pr), NULL);
	pr->owner = _strdup(owner);
	if (owner && !pr->owner)
		return (free(pr->name), free(pr), NULL)
	pr->age = age;
	return (pr);
}
