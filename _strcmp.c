#include "shell.h"

/**
 * _strcmp - compares two strings.
 * @s1: the first string to compare.
 * @s2: the second string to compare.
 * Return: always 0.
 */
int _strcmp(char *s1, char *s2)
{
    int a;

    for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
    {
        if (s1[a] != s2[a])
            return ((int)s1[a] - s2[a]);
    }
    return (0);
}
