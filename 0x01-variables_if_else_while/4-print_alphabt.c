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

	for (alphabet <= 'z'; alphabet != 'e'; alphabet != 'q'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
