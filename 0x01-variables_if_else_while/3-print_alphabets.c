#include <stdio.h>

/**
 * main -> assign a random prints the alphabet in lowercase
 * You can only use the putchar function
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 97; ch <= 122; ch++)
	{
		putchar(ch);
	}
	for (ch = 65; ch <= 90; ch++)
	{
		putchar(ch);
	}
	putchar(10); /*this is ascii code for new line*/

	return (0);
}
