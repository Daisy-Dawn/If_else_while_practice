#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/*
 * main - Finding if a number is positive or negative
 *
 * Description: Finding if a number is postive or negative
 *
 * Return: 0 always
 */

int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;

				if (n > 0)
				printf("%d is positive\n", n);

				else if (n < 0)
				printf("%d is negative\n", n);

				else
					(n == 0);
				printf("%d is zero\n", n);

				return (0);
}
