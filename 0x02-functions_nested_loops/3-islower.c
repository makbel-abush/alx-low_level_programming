#include "main.h"

/**
 * _islower - function that print lower case alphabet
 *
 * c:parameter that will  printed in  lower case
 *
 * Return: 1 if it is lower case
 * and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
