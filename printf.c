#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * _printf - print characters with a format to stdout
 *
 * @format: string that contains characters to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	setfun functions[] = {
		{"c", print_char}, {"s", print_string}, {"i", print_int}, {"d", print_digit},
		{NULL, NULL}
	};
	va_list args;
	unsigned int fc, count, i, written_size = 0;
	int tp;
	unsigned int *wsize = &written_size;

	if (!format)
		return (-1);
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
						tp = functions[i].func("prueba", wsize, args);
					if (tp == 1)
						fc++;
				}
			}
		}
		if (tp == 0)
		{
			tp = printc(wsize, format[fc], format[fc + 1]);
			if (tp == -1)
				return (-1);
			fc += tp;
		}
	}
	va_end(args);
	printf("numeros impresos: %u\n", written_size);
	return (written_size);
}
