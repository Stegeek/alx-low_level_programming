#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 *
 * Return: returns(0) success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

