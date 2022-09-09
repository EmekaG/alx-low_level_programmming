#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Value of n: %d\n", n);
		n++;
	}
	else if (n < 0)
	{
		printf("Value of n: %d\n", n);
		n--;
	}
	else
	{
		printf("Value of n: %d\n", n);
	}
	return (0);
}
