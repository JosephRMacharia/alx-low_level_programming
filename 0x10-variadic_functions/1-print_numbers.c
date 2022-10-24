#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 *
 * Description -   prints numbers, followed by a new line.
 *
 * @n: number of integers passed to function
 * @separator: string to be printed between numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list variableList;
unsigned int i;

va_start(variableList, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(variableList, int));
if (separator && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(variableList);
}
