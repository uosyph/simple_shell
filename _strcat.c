#include "shell.h"

/**
 *_strcat - copys a string to another string.
 *@dest: first string.
 *@src: second string.
 *Return: the destination.
 */
char *_strcat(char *dest, char *src)
{
    int d = 0, s = 0;

    while (dest[d] != '\0')
    {
        d++;
    }
    while (src[s] != '\0')
    {
        dest[d + s] = src[s];
        s++;
    }
    return (dest);
}
