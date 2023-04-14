#include "shell.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 * Return: <0 if first string is less than second string,
 * 0 if they're equal,
 * >0 if first string is greater than second string.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

char *_getenv(char *name)
{
	char **env, *value = NULL, *pathname = NULL;
	int i;

	env = environ;
	for (i = 0; env[i]; i++)
	{
		pathname = strtok(env[i], "=");
		if (_strcmp(name, pathname) == 0)
		{
			value = strtok(NULL, env[i]);
			break;
		}
	}
	return (value);
}
