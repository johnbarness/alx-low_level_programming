#include <stdio.h>
#include <stdlib.h>
/*
 * main - entry point
 * Description: prints the alphabet in lowercase
 * Return: Always 0
*/
int main(void)
{
	char low;

	for (low = 'a'; low = 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			putchar(low);
	}
	putchar('\n');
	return (0);
}
