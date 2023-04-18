#include "shell.h"

/**
 * _get_token - gets token.
 * @lineptr: the user.
 * Return: pointer.
 */
char *_getline_command(void)
{
    char *lineptr = NULL;
    size_t charter_user = 0;

    if (isatty(STDIN_FILENO))
        write(STDOUT_FILENO, "#cisfun$ ", 10);

    if (getline(&lineptr, &charter_user, stdin) == EOF)
    {
        free(lineptr);
        return (NULL);
    }

    return (lineptr);
}
