#include <stdio.h>

/**
* main -> prints the size of various types
* You should produce the exact same output as in the example
* Warnings are allowed
* Your program should return 0
* Return: always 0
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
