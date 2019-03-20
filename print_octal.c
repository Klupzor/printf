#include "holberton.h"

/**
 * print_octal - return a string with number base 8
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of string
 * @args: argument to print
 *
 * Return: String to print
 */

int print_octal(char *type_struct, unsigned int *wsize, va_list args)
{
	char num_string[1024];
	int base = 8;
	int number;

	(void)*type_struct;

	number = va_arg(args, int);
/*	if (number >= 0)*/
		put_output(wsize, itoa(number, num_string, base));

	return (1);


}
