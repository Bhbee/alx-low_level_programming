/**#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: int type number
 * Return: 1 if c is uppercase, 0 otherwise
 

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	else
		return (0);
}
*/
#include "main.h"
/**
* _isupper - check is uppercase character
* @c: int to test
* Return: (1) if character is uppercase, else (0) if not uppercase
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
