#include "maain.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *	can only use _putchar three times
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i > 9)
				_putchar(i / 10 + '0');

			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
