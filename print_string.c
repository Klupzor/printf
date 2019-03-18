#include "holberton.h"
#include <stdio.h>
/**
 * print_string - return a string with string received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String to print
 */

char *print_string(char *type_struct, va_list args)
{
	int i;

	for (i = 0; type_struct[i] != '\0'; i++)
	{
		return (va_arg(args, char *));
	}
}
