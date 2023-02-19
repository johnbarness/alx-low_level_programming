#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
*/
int main(void)
{
	char low;

	for (low = 'a'; low <= 'b'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);


}

