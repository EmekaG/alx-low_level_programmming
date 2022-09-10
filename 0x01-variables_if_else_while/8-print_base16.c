#include <stdio.h>

/**
 * main  - Print the alphabets in uppercase and then the lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (number = 'a'; number <= 'f'; number++)
		putchar(number);
	putchar('\n');

	return (0);
}
