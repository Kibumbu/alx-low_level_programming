#include <stdio.h>

/**
 * main -> prints all possible combinations of two two-digit numbers.
 * The numbers should range from 0 to 99
 * All numbers should be printed with two digits. 1 should be printed as 01
 * Return: always (0)
 */
int main(void)
{
	int ch;
	int n;

	for (ch = 48; ch <= 57; ch++)
	{
		for (n = 48; n <= 57; n++)
		{
			putchar(ch);
			putchar(n);
			putchar(32);
		}
	}
	putchar(10);

	return (0);
}
