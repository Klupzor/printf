#include "holberton.h"

/**
 * print_digit - return a string with digits to received
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of string to print
 * @args: argument to print
 *
 * Return: Digits to print
 */

int print_digit(char *type_struct, unsigned int *wsize, va_list args)
{
	char *num_string;

	(void)*type_struct;

	num_string = convert_num(va_arg(args, int));

	put_output(wsize, num_string);

	return (1);


}
