#include "shell.h"

/**
 * _strlen - copies a string from source to destination.
 * @s: pointer.
 * Return: char pointer to destination.
 */
int _strlen(char *s)
{
	int ch = 0;

	while (*(s + ch) != '\0')
	{
		ch++;
	}

	return (ch);
}
