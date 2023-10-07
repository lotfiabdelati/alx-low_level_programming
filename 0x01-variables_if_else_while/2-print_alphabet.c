#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * description: print all alphabet letters
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	while (ch <= '2')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');

	return (0);
}
