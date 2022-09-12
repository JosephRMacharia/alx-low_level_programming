#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	char ch = 'a';
	int i = 0;
	/* your code goes there */
	while (i < 26)
	{
		putchar(ch);
		ch++;
		i++;
	}
	putchar('\n');
	return (0);
}
