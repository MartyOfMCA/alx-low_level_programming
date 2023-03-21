#include "dog.h"
#include "main.h"

/**
 * new_dog - Create a new dog record.
 *
 * @name: The name for the dog
 * @age: The age for the dog
 * @owner: The owner for the dog
 *
 * Return: The new dog record
 *
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	(*new_dog).name = malloc(sizeof(char) * _strlen(name));
	if ((*new_dog).name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	(*new_dog).owner = malloc(sizeof(char) * _strlen(owner));
	if ((*new_dog).owner == NULL)
	{
		free(new_dog);
		free((*new_dog).name);
		return (NULL);
	}
	_strcpy((*new_dog).name, name);
	(*new_dog).age = age;
	_strcpy((*new_dog).owner, owner);

	return (new_dog);
}

/**
 * _strlen - Determine the length for the given string.
 *
 * @str: The given string
 *
 * Return: The total number of characters found including
 * the null terminating character
 *
 **/
int _strlen(char *str)
{
	int length = 0;

	while (str[length])
	{
		length++;
	}
	return (++length);
}


/**
 * _strcpy - Copies the given string @str into
 * the destination string @dest.
 *
 * @dest: The destination string
 * @str: The given string to be copied
 *
 **/
void _strcpy(char *dest, char *str)
{
	int str_index = 0;

	while (str[str_index])
	{
		dest[str_index] = str[str_index];
		str_index++;
	}
	dest[str_index] = '\0';
}
