#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign a random number to the variable n each time it is executed.
 * print the last digit of the number stored in the variable n
 * Retun: always (0)
 */
int main(void)
{
int n;
int last;

srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 5)
{
	printf("the last digit of %d is %d and is greater than 5", n, last);
}
if (last == 0)
{
	printf("the last digit of %d is %d and is 0", n, last);
}
if (n < 6 && n != 6)
{
	printf("the last digit of %d is %d and is less than 6 and not 0", n, last);
}

printf("\n");

return (0);
}
