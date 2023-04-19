#include "shell.h"

/**
 * _exit_command - closes the prompt when the exit command is passed.
 * @arg: pointer with the direction to free the allocated memory for
 * the arguments passed to the program.
 * @lineptr: input string.
 * @_exit: the value of exit.
 * Return: void.
 */
void _exit_command(char **arg, char *lineptr, int _exit)
{
    int exit_status = 0;

    if (!arg[1])
    {
        free(lineptr);
        free(arg);
        exit(_exit);
    }
    exit_status = atoi(arg[1]);
    if (exit_status < 0)
        exit_status = 2;
    if (exit_status > 232)
        exit_status = 232;

    free(lineptr);
    free(arg);
    exit(exit_status);
}

/**
 * _getenv - get all enviroment.
 * @env: the enviroment.
 * Return: void.
 */
void _getenv(char **env)
{
    size_t run = 0;

    while (env[run])
    {
        write(STDOUT_FILENO, env[run], _strlen(env[run]));
        write(STDOUT_FILENO, "\n", 1);
        run++;
    }
}
