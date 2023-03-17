#include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 *
 * Return 0 (Success)
 */

int main(void)
{
	printf("size of a char: %lu byte(s)", (unsigned long)sizeof(char));
	printf("size of an int: %lu byte(s)", (unsigned long)sizeof(int));
	printf("size of a long int: %lu byte(s)", (unsigned long)sizeof(long int));
	printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(long long int));
	printf("size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return (0);
}
