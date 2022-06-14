#include <stdio.h>

/**
 *main -> prints all single digit numbers of base 10 starting from
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * You can only use putchar twice in your code
 * All your code should be in the main function
 * Return: always 0
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
	}

	putchar(10); /*this is an ascii code for a new line*/

	return (0);
}
