#include <stdio.h>
#include "main.h"

/**
 * main Entry point 
 *
 * return: Always = (Success)
 */

int main ()
{
	char text[8] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
