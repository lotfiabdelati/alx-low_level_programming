#include <stdlib.h>
#include <stdio.h>
/*
 * main -entry point
 *
 * description: print all prints the lowercase alphabet in reverse
 *
 * Return: always 0 (success)
 */

int main(void)

{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
	putchar(ch);
	}
	printf("\n");
	return (0);
}
