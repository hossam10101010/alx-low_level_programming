#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description:false or true validation
 *
 * return: 0 (succces)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is nigative\n", n);
	return (0);
}
