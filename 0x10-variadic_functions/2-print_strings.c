#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - check the code
 *
 * Description -  prints strings, followed by a new line.
 *
 * @n: number of integers passed to function
 * @separator: string to be printed between numbers
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list1;
unsigned int i;
char *clone;

va_start(list1, n);

for (i = 0; i < n; i++)
{
clone = va_arg(list1, char*);
if (clone != NULL)
printf("%s", clone);
else
printf("%p", clone);
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(list1);
}
