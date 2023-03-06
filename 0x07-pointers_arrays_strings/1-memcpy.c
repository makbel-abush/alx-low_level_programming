#include "main.h"

/**
 * _memcpy - function copies @n bytes from memory area
 * @n: function copy
 *
 * @xyz: bytes from memory area
 *
 * @ab: to memory area
 *
 * Return: a pointer to @ab
 */
char *_memcpy(char *ab, char *xyz, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		ab[i] = xyz[i];
		i++;
	}
	return (ab);
}
