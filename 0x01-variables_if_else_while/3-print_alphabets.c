#include <stdio.h>

/**
 * prints the alphabet in lowercase, and then in uppercase
 * You can only use the putchar function
 * putchar (10)
 * Return : always (0)
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
