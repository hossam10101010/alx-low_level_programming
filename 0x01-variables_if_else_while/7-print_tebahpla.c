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
	char ch = 'z';

	while (ch <= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
