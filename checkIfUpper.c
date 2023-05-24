#include "shell.h"

/**
 * checkIfUpper - function declaration
 * Description: check case of c
 * @c: character to test
 * Return: 1 for true and 0 for false
 */

int checkIfUpper(int c);

/**
 * checkIfUpper - function definition
 * Description: tests case of c
 * @c: character to test
 * Return: 1 if upper 0 if not upper
 */

int checkIfUpper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
