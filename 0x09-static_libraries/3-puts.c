#include "main.h"
<<<<<<< HEAD

/**
* _puts -> this is a function that puts
* @str: a param to _puts function
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
=======
/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
>>>>>>> 6e3c58463edb761d5068f4c6a3cc7d2d6a6593fe
}
