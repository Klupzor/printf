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

int selfunction(const char *format, unsigned int *fc,
		unsigned int *wsize, va_list args)
{	
	setfun functions[] = {
		{"c", print_char}, {"s", print_string}, {"i", print_int}, {"d", print_digit},
		{"b", print_binary}, {NULL, NULL} 
	};
	unsigned int count, i;
	int tp = 0;

		for (i = 0 ; functions[i].type != NULL && tp == 0; i++)
		{
			for (count = *fc + 1;  tp == 0 && format[count] != '\0'; count++)
			{
				printf("caracter: %c function: %c\n", format[count], *functions[i].type);
				if (format[count] == *functions[i].type)
					tp = functions[i].func("prueba", wsize, args);
				if (tp == -1)
					return (-1);
				if (tp == 1)
					*fc += 1;
			}
		}

	return (tp);
}

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int written_size = 0, fc;
	int tp;
	unsigned int *wsize = &written_size, *pfc = &fc;

	if (!format)
		return (-1);
	va_start(args, format);
	for (fc = 0; format[fc] != '\0' ; fc++)
	{
		tp = 0;
		if (format[fc] == '%')
		{
			tp = selfunction(format, pfc, wsize, args);
		}
		if (tp == 0)
		{
			tp = printc(wsize, pfc, format[fc], format[fc + 1]);
			if (tp == -1)
				return (-1);
		}
	}
	va_end(args);
	return (written_size);
}
