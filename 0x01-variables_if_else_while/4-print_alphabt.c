#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a''f''r' ; a <= 'd''p''z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
