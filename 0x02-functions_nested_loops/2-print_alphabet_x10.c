#include "holberton.h"

/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return:0
 */
void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
return (0);
}