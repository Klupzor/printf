#include "holberton.h"
/**
 * print_char - return a string with string received
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of array
 * @args: argument to print
 *
 * Return: return 1 if successfull and -1 if it is not
 */

int print_char(char *type_struct, unsigned int *wsize, va_list args)
{
	char c;
	char str[2];
	(void)*type_struct;

	c = va_arg(args, int);
	str[0] = c;
	str[1] = '\0';

	put_output(wsize, str);

	return (1);


}
