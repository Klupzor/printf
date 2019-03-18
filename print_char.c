#include "holberton.h"
#include <stdio.h>
/**
 * print_char - return a string with char received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String with character to print
 */

char *print_char(char *type_struct, va_list args)
{
	int i;

	for (i = 0; type_struct[i] != '\0'; i++)
	{
		return (va_arg(args, char *));
	}

}
