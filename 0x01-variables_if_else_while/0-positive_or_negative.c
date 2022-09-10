#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print if the number is postive, zero or negative
 *
 * Description: using the main function
 * this program prints"programming is postive,zero or negative"
 * Retutrn: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
