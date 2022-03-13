#include <stdio.h>

/**
 * main - prints the alphabets in lovercase
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
		if ( i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
