#include "main.h"

/**
 * _islower -> checks if the character is lowercase
 * Prototype: int _islower(int c);
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 * Return: Always (0)
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
