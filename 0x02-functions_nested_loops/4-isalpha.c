#include <stdio.h>
#include "main.h"

/**
 * -isalpha -> checks whether a character is an alphabet or not
 *  Prototype: int _isalpha(int c);
 *  Returns 1 if c is a letter, lowercase or uppercase
 *  Returns 0 otherwise
 *  Returns: always (0)
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
