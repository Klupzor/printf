#include "holberton.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * print_string - return a string with string received
 *
 * @type_struct: string that contain flags and type of structure
 * @args: argument to print
 *
 * Return: String to print
 */

int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;
	char *string;

	va_start(args, format);

	if (format[i] == 's')
	{
		string = print_string("c", args);
		printf("%s", string);
	
	}

	return (0);

}

char *print_string(char *type_struct, va_list args)
{

	(void)*type_struct;

	return (va_arg(args, char *));


}
/*

char *print_string(char *type_struct, va_list args)
{
	char *str;
	int lenght;

	(void)*type_struct;

	str = va_arg(args, char *);
	lenght = strlen(str);
	printf("%d\n", lenght);
	return (str);


}
 */


int main()
{
	_printf("s", "HEllo\n");
	return (0);

}
