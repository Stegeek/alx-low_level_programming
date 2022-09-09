#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints the letters a-z
 *
 * Return: Returns nothing
 *
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n')
	return (0);
}
