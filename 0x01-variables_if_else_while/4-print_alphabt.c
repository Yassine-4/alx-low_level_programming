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

	for (a = 'a' ; a <= 'c'; a++)
		putchar(a);
	for (a = 'f' ; a <= 'p'; a++)
		putchar(a);
	for (a = 'r' ; a <= 'z'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
