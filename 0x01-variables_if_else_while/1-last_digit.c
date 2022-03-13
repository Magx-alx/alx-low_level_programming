#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - main function
 *
 * Description: the main function
 * puts text to stout.
 * Return: 0
 */

int main(void)
{
	int n , ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
  	ld= n % 10;
	printf("%d is the last digit for number %d", ld, n);
	return (0);
}
