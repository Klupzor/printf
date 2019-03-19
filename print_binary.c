#include "holberton.h"

/**
 * print_binary - return a string with number base 2
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of string
 * @args: argument to print
 *
 * Return: String to print
 */

int print_binary(char *type_struct, unsigned int *wsize, va_list args)
{
	char num_string[128];
	int base = 2;
	int number;

	(void)*type_struct;

	number = va_arg(args, int);
	
	if (number >= 0)
		put_output(wsize, itoa(number, num_string, base));

	return (1);


}
