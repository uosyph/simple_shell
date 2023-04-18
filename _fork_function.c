#include "shell.h"

/**
 * _fork_fun - creates a fork.
 *@arg: command and path values.
 *@av: the name of the program.
 *@env: local environment.
 *@lineptr: command line for the user.
 *@np: the ID of the process.
 *@c: checker to add new test.
 *Return: always 0.
 */
int _fork_fun(char **arg, char **av, char **env, char *lineptr, int np, int c)
{
    pid_t child;
    int status;
    char *format = "%s: %d: %s: not found\n";

    child = fork();

    if (child == 0)
    {
        if (execve(arg[0], arg, env) == -1)
        {
            fprintf(stderr, format, av[0], np, arg[0]);
            if (!c)
                free(arg[0]);
            free(arg);
            free(lineptr);
            exit(errno);
        }
    }
    else
    {
        wait(&status);

        if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
            return (WEXITSTATUS(status));
    }
    return (0);
}
