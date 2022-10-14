#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - check the code
 * Description - Write a function that prints a name.
 * @f - function pointer to print name
 * @name:  name of the person
 * @f:  name of the person
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
