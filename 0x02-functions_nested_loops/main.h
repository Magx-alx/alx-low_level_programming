#include <stdio.h>
int _putchar(char c)
{
    putchar(c);
    return (0);
}

void print_alphabet(void)
{
	char c = 'a';
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
