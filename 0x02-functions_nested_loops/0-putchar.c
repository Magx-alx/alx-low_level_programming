#include <stdio.h>
#include "main.h"

/**
 * main - prints the _putchar
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	char text[8] = "_putchar";
	
	for (int i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	return (0);
}
void _putchar(char c)
{
	putchar(c);
}
