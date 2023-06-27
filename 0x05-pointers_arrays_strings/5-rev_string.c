#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[len] != '\0')
		len++;

	for (index = 0; index < len / 2; index++)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
