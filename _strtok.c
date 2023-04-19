#include "shell.h"

char *_strchr(const char *s, int c);
size_t _strspn(const char *s1, const char *s2);
size_t _strcspn(const char *s1, const char *s2);

/**
 * _strtok - breaks the first string into tokens
 * and null-terminates them.
 * Delimiter-Characters at the beginning
 * andthe end of str are skipped.
 * On each subsequent call delim may change.
 * @str: first string to tokenize.
 * @delim: second string with the character that delimit str.
 * Return: first or next token if possible, a null-pointer otherwise.
 **/
char *_strtok(char *str, const char *delim)
{
    static char *p;

    if (str)
        p = str;
    else if (!p)
        return (0);
    str = p + _strspn(p, delim);
    p = str + _strcspn(str, delim);
    if (p == str)
        return (p = 0);
    p = *p ? *p = 0, p + 1 : 0;
    return (str);
}

/**
 * _strcspn - computes the length of the maximum initial segment of
 * the string pointed to by s1 which consists entirely of characters
 * that are not from the string pointed to by s2.
 * @s1: first string to check.
 * @s2: second string to compare to.
 * Return: length of the segment.
 **/
size_t _strcspn(const char *s1, const char *s2)
{
    size_t ret = 0;

    while (*s1)
    {
        if (_strchr(s2, *s1))
            return (ret);
        s1++, ret++;
    }
    return (ret);
}

/**
 * _strspn - computes the length of the maximum initial segment of
 * the string pointed to by s1 which consists entirely of characters
 * from the string pointed to by s2.
 * @s1: first string to compute the lengh.
 * @s2: second string delimit.
 * Return: length of the segment.
 **/
size_t _strspn(const char *s1, const char *s2)
{
    size_t ret = 0;

    while (*s1 && _strchr(s2, *s1++))
        ret++;
    return (ret);
}

/**
 * _strchr - locates the ﬁrst occurrence of "c" (converted to char) in the
 * string pointed to by s.
 * The terminating null character is considered to be part of the string.
 * @s: the string.
 * @c: the char.
 * Return: a pointer to the located character,
 * or a null pointer if the character does not occur in the string.
 **/
char *_strchr(const char *s, int c)
{
    while (*s != (char)c)
        if (!*s++)
            return (0);
    return ((char *)s);
}
