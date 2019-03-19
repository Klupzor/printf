#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_int - return a string with integers received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String to print
 */

int print_int(char *type_struct, unsigned int *wsize, va_list args)
{
	char *num_string;

	(void)*type_struct;

	num_string = convert_num(va_arg(args, int));

	put_output(wsize, num_string);

	return (1);


}
