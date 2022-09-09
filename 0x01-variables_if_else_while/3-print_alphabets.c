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
	char capital = 'A';

	while (alphabet <= 'z'; capital <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
		putchar(capital);
		capital++;
	}
	putchar('\n');
	return (0);
}
