#include<stdio.h>
/**
 * main -entry point
 *
 * description : this app print all letters upper and lower case
 *
 * return: 0 success)
 */

int main(void)
{
	char ch = 'a'

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	/* from A-Z*/
	char CH = 'A';

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
