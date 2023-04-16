#include "shell.h"

/**
 *_strncmp - compares two strings.
 *@s1: first string to compare.
 *@s2: second string to compare.
 *@n: number of chars.
 * Return: the diference.
 */
int _strncmp(const char *s1, const char *s2, size_t n)
{
    int i = 0, j = 0;

    while (n && s1[i] && (s1[i] == s2[j]))
    {
        i++;
        j++;
        n--;
    }
    if (n == 0)
    {
        return (0);
    }
    else
    {
        return (s1[i] - s2[j]);
    }
}
