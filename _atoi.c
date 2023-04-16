#include "shell.h"

/**
 * _atoi - converts string to integer.
 * @s: the string.
 * Return: the integer.
 */
int _atoi(char *s)
{
    unsigned int res = 0;

    while (*s != '\0')
    {
        if (*s == '-')
        {
            return (-1);
        }
        else if (*s >= '0' && *s <= '9')
        {
            res = (res * 10) + (*s - '0');
        }
        else
            return (-1);
        s++;
    }
    return (res);
}
