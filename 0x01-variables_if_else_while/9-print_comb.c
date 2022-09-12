#include<stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;
	/* your code goes there */
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
