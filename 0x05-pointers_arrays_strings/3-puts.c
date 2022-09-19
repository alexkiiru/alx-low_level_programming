#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Desrcription: prints a string
 * on success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		putchar(*(str + 1));
		i++;
	}
	putchar (10);
}
