#include "main.h"
<<<<<<< HEAD

/**
* _isupper -> this is a function to check upper case alphas
* @c: an integer paramer
* Return: something but success
*/
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
=======
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
