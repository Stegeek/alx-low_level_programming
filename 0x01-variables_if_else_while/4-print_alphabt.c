#include <stdio.h>

/**
 *main - Entry point
 *
 *Description: Prints all the alphabet except q and e
 *
 *Return: returns nothing
 *
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar ('\n');
	return (0);
}
