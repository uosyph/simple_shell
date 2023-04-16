#include "shell.h"

/**
 * main - main arguments function.
 * @argc: arguments c.
 * @argv: arguments v.
 * @envp: environment.
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)),
char *argv[] __attribute__((unused)), char *envp[])
{
	struct stat st;
	pid_t child;
	char *token, *pathValue, *getcommand, *lineptr = NULL;
	size_t i, n;
	int status, y = 0;
	char **allValuesPath, **user_command;

	pathValue = _getenv("PATH");
	allValuesPath = _get_path(pathValue);
	while (1)
	{
		write(STDOUT_FILENO, "#cisfun$ ", 10);
		if (getline(&lineptr, &n, stdin) == -1)
			break;
		user_command = _get_token(lineptr);
		if (stat(user_command[0], &st) == 0)
			getcommand = user_command[0];
		else
		{
			getcommand = _get_command(allValuesPath, user_command[0]);
			if (getcommand == NULL)
				perror("Command not found");
		}
		child = fork();
		if (child == 0)
		{
			if (execve(getcommand, user_command, envp))
			{
				perror("./simple_shell");
				exit(EXIT_FAILURE);
			}
		}
		else
			wait(&status);
	}
	free(allValuesPath);
	putchar('\n');
	free(lineptr);
	exit(status);
}
