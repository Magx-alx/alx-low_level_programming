#include <stdio.h>

/**
 * main - prints the alphabets in lovercase
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j = i + 1;
		for (j; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
