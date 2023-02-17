#include <stdio.h>

/**
 * main - Entry point
 *
 * Return Always 0 (Success)
 */

int main(void)
{
	char sizeChar = "size"
	int sizeInt = 100
	long int sizeLongint = 100
	long long int sizeLonglint = 100
	float sizeFloat = 10.9f

	printf("Size of a char:%c byte(s)", sizeChar);
	printf("size of an int: %d byte(s)", sizeInt);
	printf("size of a long int: %ld byte(s)", sizeLongint);
	printf("size of a long long int: %lld byte(s)", sizeLonglint);
	printf("size of a float: %f byte(s)", sizeFloat);
}
