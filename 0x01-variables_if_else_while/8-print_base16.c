#include <stdio.h>

/**
 *main -> Write a program that prints all the numbers of base 16 in lowercase
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: always 0
 */
int main(void)
{
	/**
	 * hexadecimal
	 * 1 2 3 4 5 6  7 8 9 a b c d e f
	 */
	char ch;
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar(10);

	return (0);
}
