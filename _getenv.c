#include "shell.h"

/**
 * _getenv - gets the PATH of enviroment.
 * @name: the enviroment.
 * Return: the PATH.
 */
char *_getenv(char *name)
{
	char *value = NULL, *pathname = "PATH";
	int len = 4;
	char **env;

	env = environ;
	while (*env != NULL)
	{
		if (strncmp(*env, pathname, len) == 0)
		{
			value = (*env) + (len + 1);
			break;
		}
		env++;
	}
	return (value);
}
