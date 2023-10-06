#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this code
 * description the code positive or negative
 * Return: 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive", n);
	else
		printf("%i is negative", n);
/* your code goes there */
	return (0);
}
