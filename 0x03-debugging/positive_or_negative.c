#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "main.h"
/**
 * positive_or_negative  -  prints if integer is positive or negative
 * main - Entry point
 * @i: number to be checked
 *
 * Return: 0
 */
int main(void)
{
	int i;

	srand(time(0));
	i = rand() -RAND_MAX / 2;
	
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
		return (0);
}
