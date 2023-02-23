#include "main.h"
/**
 * print_alphabet_x10 - function to print 10_times alphabet
 *
 * Return: always (0);
 */

void print_alphabet_x10(void)
{
	int k;
	char p;

	for (k = 1 ; k <= 10 ; k++)
	{
		for (p = 'a' ; p <= 'z' ; p++)
			_putchar(p);
		_putchar('\n');
	}
}

