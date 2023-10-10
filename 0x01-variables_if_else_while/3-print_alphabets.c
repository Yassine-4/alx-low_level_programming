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

	for (a = 'a'; a <= 'z'; a++)
		printf("%c", a);
	for (a = 'A'; a <= 'Z'; a++)
	printf("%c", a);
	printf("\n");
	return (0);
}
