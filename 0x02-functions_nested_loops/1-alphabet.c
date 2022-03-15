#include <stdio.h>
#include "main.h"

/**
 * main - prints the _putchar
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
void _putchar(char c)
{
	putchar(c);
}
