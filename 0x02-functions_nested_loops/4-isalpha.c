#include "main.h"

/**
 * -isalpha - cheks for alphabetical letters
 *  @c : a charter to be checke  on
 *  Return : return 0 or 1 depending on condition
 *
 */
int _isalpha(int c);
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
