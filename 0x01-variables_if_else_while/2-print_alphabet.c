#include <stdio.h>

/**
 * main  -> prints the alphabet in lowercase
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
	putchar(ch);
	}
	putchar(10);

	return (0);
}
