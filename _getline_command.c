#include "shell.h"

/**
 * _getline_command - prints "#cisfun$ ",
 * and waits for user input.
 * Return: user input.
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
