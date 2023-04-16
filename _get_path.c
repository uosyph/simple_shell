#include "shell.h"

/**
 * _get_path - separates the path to new strings.
 * @path: path of directory.
 * Return: pointer to the strings.
 */
char **_get_path(char *path)
{
    int index = 0, size = 100;
    char *symbol = ":";
    char **path_absol = malloc(size);
    char *path_rela;
    char *copyPath = malloc(_strlen(path));

    copyPath = strcpy(copyPath, path);

    if (path_absol == NULL)
        exit(EXIT_FAILURE);
    path_rela = strtok(copyPath, symbol);
    while (path_rela)
    {
        path_absol[index] = path_rela;
        index++;
        path_rela = strtok(NULL, symbol);
    }
    path_absol[index] = NULL;
    return (path_absol);
}