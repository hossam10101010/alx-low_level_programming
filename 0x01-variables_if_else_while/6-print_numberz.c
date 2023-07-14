#include<stdio.h>
/**
 * main -entry point
 *
 * description : this app print all letters
 *
 * return: 0 success)
 */

int main(void)
{
	int d = '0';
	while (d <= '9')
	{
		/* convirt d to ASCII*/
		putchar(d + '0');
		d++;
	}
	putchar('\n');
	return (0);
