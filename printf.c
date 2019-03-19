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
