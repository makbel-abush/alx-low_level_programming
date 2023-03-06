#include "main.h"

/**
 * _memset - function fill the first n bytes of pointed memory
 * @n: bytes of the memory area pointed to by @a
 *
 * @a: constant byte @b
 *
 * @b: memory area pointer
 *
 * Return: a pointer for memory area
 */
char *_memset(char *a, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	a[i] = b;
	i++;
	}

	return (a);
}
