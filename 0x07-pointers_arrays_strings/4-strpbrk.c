#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: first occurrence in the string
 *
 * @a: matches one of the bytes
 *
 * Return: a pointer to a set of bytes
 */
char *_strpbrk(char *s, char *a)
{
	int j;

	while (*s)
	{
		for (j = 0; a[j]; j++)
		{
			if (*s == a[j])
				return (s);
		}
		s++;
	}
	return (0);
}
