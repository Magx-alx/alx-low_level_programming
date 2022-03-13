#include <stdio.h>

/**
 * main - prints the alphabets in lovercase
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
		if (ch == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
