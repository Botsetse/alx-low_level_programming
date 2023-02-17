#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sizeChar = 's';
	int sizeInt = 100;
	long int sli = 100;
	long long int slli = 100;
	float sizeFloat = 10.9f;

	printf("Size of a char: %lu byte(s)", (unsigned long)sizeof(sizeChar));
	printf("\nSize of an int: %lu byte(s)", (unsigned long)sizeof(sizeInt));
	printf("\nSize of a long int: %lu byte(s)", (unsigned long)sizeof(sli));
	printf("\nSize of a long long int: %lu byte(s)", (unsigned long)sizeof(slli));
	printf("\nSize of a float: %lu byte(s)\n", sizeof(sizeFloat));
	return (0);
}
