#include "holberton.h"

/**
 * print_int - return a string with integers received
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of string
 * @args: argument to print
 *
 * Return: String to print
 */

int print_int(char *type_struct, unsigned int *wsize, va_list args)
{
	char num_string[1024];
	int base = 10;
	int number;

	(void)*type_struct;

	number = va_arg(args, int);

	put_output(wsize, itoa(number, num_string, base));

	return (1);


}
