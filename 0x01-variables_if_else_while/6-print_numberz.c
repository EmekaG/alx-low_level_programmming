#include <stdio.h>

/**
 * main - Print all base 10 numbers starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
		putchar(number);
	putchar('\n');

	return (0);
}

