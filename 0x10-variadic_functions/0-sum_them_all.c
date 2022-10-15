#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 *
 * Description -  returns the sum of all its parameters.
 *
 * @n: number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list variableList;
unsigned int i;
int sum = 0;

if (n == 0)
{
return (0);
}
va_start(variableList, n);
for (i = 0; i < n; i++)
{
sum += va_arg(variableList, int);
}
va_end(variableList);

return (sum);
}
