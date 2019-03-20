#include "holberton.h"

/**
 * selfunction - function that select the functions in a struct
 *
 * @format: string with data flags printf
 * @fc: counter of position
 * @wsize: size of string to print
 * @args: arguments to function printf
 *
 * Return: 1 success, -1 exit or fail function
 */

int selfunction(const char *format, unsigned int *fc,
	unsigned int *wsize, va_list args)
{
	setfun functions[] = {
    {"r", print_reverse}, {"c", print_char}, 
    {"s", print_string}, {"i", print_int}, {"d", print_digit},
		{"b", print_binary}, {"x", print_hexa},
		{"o", print_octal}, {"X", print_hexa},
		{NULL, NULL}
	};
	unsigned int count, i;
	int tp = 0, stp = 0;

	for (count = *fc + 1;  tp == 0 && stp == 0 && format[count] != '\0'; count++)
	{
		for (i = 0 ; functions[i].type != NULL && tp == 0 && stp == 0; i++)
		{
			if (format[count] == *functions[i].type)
				tp = functions[i].func("prueba", wsize, args);
			if (tp == -1)
				return (-1);
			if (tp == 1)
				*fc += 1;
			if (functions[i + 1].type == NULL)
				stp = 1;
		}
	}

	return (tp);
}
