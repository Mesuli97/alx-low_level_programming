#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	char love;
	
	for (love = 'a'; love <= 'z'; love++)
		putchar(love);
	putchar('\n');
	return (0);
}
