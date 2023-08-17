#include <stdio.h>

/**
 * positive_or_negative - Determine if a number is positive, zero, or negative
 * @i: The number to be checked
 *
 * Return: No return value (void)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}               
