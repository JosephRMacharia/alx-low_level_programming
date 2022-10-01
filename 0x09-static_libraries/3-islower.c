#include "main.h"
<<<<<<< HEAD

/**
* _islower -> checks if the character is lowercase
* @c: a charcter argument
* Return: returns 1 and 0 depending on condition
*/
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
=======
/**
*_islower - controls if a character is in lowercase
*@c: character to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
