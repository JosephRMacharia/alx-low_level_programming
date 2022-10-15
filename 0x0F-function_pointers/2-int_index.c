#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - check the code
 * Description -  executes a function given as a parameter
 * on each element of an array.
 * @size:  number of elements in the array
 * @cmp: pointer to the function you need
 * @array: array to execute func on
 * int_index - index of the first element cmp returns 0
 * Description -  returns the index of the first element cmp returns 0
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);
			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
