#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly
 * - Dora Korpar, 2015-10-19,
 *   followed by a new line, to the standard error.
 *   Return: always 0 (success)
 */
int main(void)
{
	ssize_t write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
