#include "main.h"

/**
 * print_alphabitic_10x - print alpha 10 times
 */
void print_alphabet_x10(void)
{
	int ten;
	char la;
	for (la = 0; ten <= 9; ten++)
	{
		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchat('\n');
	}
}
