#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * printf - print characters with a format to stdout
 *
 * @format: string that contains characters to print
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	setfun functions[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_digit},
	//	{"%", print_percentage},
		{NULL, NULL}
	};
	va_list args;
	unsigned int fc, count, i, tp, written_size = 0;
	char *c;
	unsigned int *wsize = &written_size;

	if (!format)
		return(-1);

	c = malloc(sizeof(char) * 1);
	va_start(args, format);

	for (fc = 0 ; format[fc] != '\0' ; fc++)
	{
		tp = 0;
		if (format[fc] == '%')
		{
			for (count = fc + 1;  tp == 0 && format[count] != '\0'; count++)
			{
				for (i = 0 ; functions[i].type != NULL && tp == 0; i++)
				{
					if (format[count] == *functions[i].type)
					{
						tp = functions[i].func("prueba", wsize, args);
					}
					if (tp == 1)
						fc++;
				}
			}
		}
		if (tp == 0)
		{
			c[0] = format[fc];
			put_output(wsize, c);
		}
	}
	va_end(args);
	free(c);
	return (written_size);
}
