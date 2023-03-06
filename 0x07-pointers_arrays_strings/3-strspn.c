#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 *
 * @s: the initial segment of
 *
 * @a: which consist only of bytes from
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *a)
{
	int d = 0, g, h;

	for (g = 0; s[g] != '\0'; g++)
	{
		if (s[g] != 32)
		{
			for (h = 0; a[h] != '\0'; h++)
			{
				if (s[g] == a[h])
					d++;
			}
		}
		else
			return (d);
	}
	return (d);
}
