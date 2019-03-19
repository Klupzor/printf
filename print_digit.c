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
	char num_string[128];
	int base = 10;
	int number;

	(void)*type_struct;

	number = va_arg(args, int);

	put_output(wsize, itoa(number, num_string, base));

	return (1);


}
