#include <stdlib.h>
#include <stdio.h>
/**
 * main -entry point
 *
 * description: print all alphabet in lowercase then in uppercase
 *
 * Return: always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';
	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*prints a - z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
