#include <stdio.h>

/**
 * main - The entry point
 *
 * Description: Prints the letters a-z
 *
 * Return: Returns nothing
 *
 */int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar("%c ", c);
	}
	return (0);
}

