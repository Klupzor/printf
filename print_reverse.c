#include "holberton.h"
/**
 * print_reverse - print reverse string
 *
 * @type_struct: type of arguments
 * @wsize: size of string to print
 * @args: argument to print
 *
 * Return: return 1 if successfull
 */

int print_reverse(char *type_struct, unsigned int *wsize, va_list args)
{
	char *s = va_arg(args, char*);
	(void)*type_struct;

	if (s == NULL)
	{
		s = "(null)";
		put_output(wsize, s);
		return (1);
	}
	reverse_array(s, nelem(s), wsize);
	return (1);


}
