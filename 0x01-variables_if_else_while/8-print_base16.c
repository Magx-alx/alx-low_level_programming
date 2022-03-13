#include <stdio.h>

/**
 * main - prints the alphabets in lovercase
 * followed by new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;

	for (ch = 0; ch < 16; ch++)
	{
		printf("%x", ch);
	}
	printf("\n");
	return (0);
}
