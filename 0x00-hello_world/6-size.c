#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * Return:0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %lu bytes(S)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu bytes(S)\n", (unsigned long)sizeof(b));
	print("size of a long int: %lu bytes(S)\n", (unsigned long)sizeof(c));
	print("size of a long long int: %lu bytes(S)\n", (unsigned long)sizeof(d));
	print("size of a float: %lu bytes(S)\n", (unsigned long)sizeof(f));
	return (0);
}
