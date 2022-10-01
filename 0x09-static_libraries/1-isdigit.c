#include "main.h"
<<<<<<< HEAD

/**
* _isdigit - funtion to check for a digit
* @c: an integer argument
* Return: success
*/
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
=======
/**
*_isdigit - function that verifies if a  character is a digit or not
*@c: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
