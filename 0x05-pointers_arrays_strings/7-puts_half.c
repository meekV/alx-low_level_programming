#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to print the second half of
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start_index;

	/* Calculate the length of the string */
	while (str[length] != '\0')
	{
		length++;
	}

	/* Determine the starting index based on string length */
	if (length % 2 == 0)
	{
		start_index = length / 2;
	}
	else
	{
		start_index = (length + 1) / 2;
	}

	/* Print the second half of the string */
	for (i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
