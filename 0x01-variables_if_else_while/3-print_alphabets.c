#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints small and capital letters
 *
 *Return: Returns nothing.
 */

int main(void)
{
	char alphabet = 'a';

	while alphabet <= 'Z'
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
