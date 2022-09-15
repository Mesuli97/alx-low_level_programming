#include "main.h"

/**
 * print_numbers - print 0123456789
 * Description: You can only use _putchar twice
 * Return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n')
}
