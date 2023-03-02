#include "main.h"
/**
 * _strcmp - comparision of two string
 * @s1: the first string
 * @s2: the second string
 * Return: difference of the two string
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
a++;
	}
	return (0);
}
