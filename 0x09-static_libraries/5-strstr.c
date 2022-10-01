#include "main.h"
<<<<<<< HEAD

/**
* _strstr - function locate
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
=======
/**
*_strstr - The _strstr() function finds the first occurrence
* of the substring needle in the string haystack.
* The terminating null bytes (\0) are not compared
*@haystack: string where the search is made
*@needle: string whose occurence is searched in haystack
*Return:Returns a pointer to the beginning of the located
* substring, or NULL if the substring is not found.
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
*/

char *_strstr(char *haystack, char *needle)
{
<<<<<<< HEAD
	char *result = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (result);
		}
		needle = fneedle;
		result++;
		haystack = result;
	}
	return (0);
=======
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
