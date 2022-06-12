#include <stdio.h>

/**
 * prints the alphabet in lowercase, followed by a new line
 * Print all the letters except q and e
 * You can only use putchar twice in your code
 * Return : Always (0)
 */
int main(void)
{
	char ch;

	for (ch 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
		putchar(ch);
		}
	}

	putchar(10); /*this is a ascii code for new line*/

	return (0);
}
