#include "shell.h"

/**
 * _strcpy - copies a string from source to destination.
 * @dest: string destination.
 * @src: string source.
 * Return: char pointer to destination.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		++i;
	}
	*(dest + i) = *(src + i);

	return (dest);
}
