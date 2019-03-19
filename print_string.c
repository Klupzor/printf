#include "holberton.h"
/**
 * print_string - return a string with string received
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of string to print
 * @args: argument to print
 *
 * Return: return 1 if successfull
 */

int print_string(char *type_struct, unsigned int *wsize, va_list args)
{
	char *s = va_arg(args, char*);
	(void)*type_struct;

	put_output(wsize, s);
	return (1);


}
