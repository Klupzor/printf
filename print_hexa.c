#include "holberton.h"

/**
 * print_hexa - return a string with number base 16
 *
 * @type_struct: string that contain flags and type of structure
 * @wsize: size of string
 * @args: argument to print
 *
 * Return: String to print
 */

int print_hexa(char *type_struct, unsigned int *wsize, va_list args)
{
	char num_string[128];
	int base = 16;
	unsigned int number;

	(void)*type_struct;

	number = va_arg(args, unsigned int);
/*	if (number >= 0)*/
		put_output(wsize, itoa(number, num_string, base));

	return (1);


}
