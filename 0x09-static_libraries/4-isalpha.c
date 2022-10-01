#include "main.h"
<<<<<<< HEAD

/**
* _isalpha - checks for alphabetical letters
* @c: a charter to be checke on
* Return: returns 0 or 1 depending on condition
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
=======
/**
*_isalpha - controls if a character is alphabetical
*@c: character to be verified
*Return: return 0 or 1
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);

return (0);
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
