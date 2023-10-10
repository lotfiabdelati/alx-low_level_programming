#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * description: print all single digit numbers of base 10 starting from 0
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar("\n");
	return (0);
}
