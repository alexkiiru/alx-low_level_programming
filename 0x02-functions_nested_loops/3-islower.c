#include "holberton.h"

/**
 * _islower - function to check lowercase character
 *@c: is the main int that will use for the argument of the function
 *Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else 
		return (0);
}
