#include "main.h"

/**
 * _isupper - check i parameter is an upper character
 *@c: input character
 * Return: 1 if is an upper case and 0 if is lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
