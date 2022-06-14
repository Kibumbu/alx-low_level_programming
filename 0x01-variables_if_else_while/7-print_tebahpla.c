#include <stdio.h>

/**
 * main ->  prints the lowercase alphabet in reverse, followed by a new line.
 * All your code should be in the main function
 * ou can only use putchar twice in your code
 * Return: always (0)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar (10); /* this is an ascii code for new line*/
	return (0);
}
