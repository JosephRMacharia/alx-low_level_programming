#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to char
 * Return: NULL
 */
=======
/**
*_strpbrk - The _strpbrk() function locates the first
* occurrence in the string s of any of the bytes in
*the string accept
*
*@s: string where search is made
*@accept: string where searched bytes are located
*
*Return:Returns a pointer to the byte in s that matches
* one of the bytes in accept, or NULL if no such byte is found
*/
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
<<<<<<< HEAD
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
=======
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
