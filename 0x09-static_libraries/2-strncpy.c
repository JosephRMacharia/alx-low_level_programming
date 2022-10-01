#include "main.h"
/**
<<<<<<< HEAD
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
 */
=======
*  _strncpy - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
<<<<<<< HEAD
=======

>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
