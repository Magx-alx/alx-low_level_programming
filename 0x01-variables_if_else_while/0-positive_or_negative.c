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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0)
	{
		printf("is positive\n");
	}
	else if (n==0)
	{
		print("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	return (0);
}
