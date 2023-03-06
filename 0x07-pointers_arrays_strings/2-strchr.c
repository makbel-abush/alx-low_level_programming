#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @d: a character in a string
 *
 * @s: in the string
 *
 * Return: a pointer to the first character
 */

char *_strchr(char *s, char d)
{
	while (*s)
	{
		if (*s != d)
			s++;
		else
			return (s);
	}
	if (d == '\0')
		return (s);

	return (NULL);
}
