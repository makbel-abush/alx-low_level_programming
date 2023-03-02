#include "main.h"
/**
 *_strncpy - copies string copy n times
 * @dest: copied string
 * @src: the copied string comes from
 * @n: char number size of string
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
