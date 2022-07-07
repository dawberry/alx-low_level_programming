#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * positive_or_negative - Print Negative if number negative or positive
 *
 * Return: Always 0
 */
int positive_or_negative(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
