#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 * struct setting_function - Struct operators
 *
 * @type: format type to print
 * @func: The function associated to print
 */
typedef struct setting_function
{
	char *type;
	int (*func)(char *type_struct, unsigned int *wsize, va_list args);
} setfun;

int selfunction(const char *format, unsigned int *fc,
		unsigned int *wsize, va_list args);
char *convert_num(int number);
unsigned int nelem(char *array);
int printc(unsigned int *wsize, unsigned int *fc, char c, char c2);
int _printf(const char *format, ...);
int put_output(unsigned int *wsize, char *string);
int print_string(char *type_struct, unsigned int *wsize, va_list args);
int print_char(char *type_struct, unsigned int *wsize, va_list args);
int print_digit(char *type_struct, unsigned int *wsize, va_list args);
int print_int(char *type_struct, unsigned int *wsize, va_list args);
int print_binary(char *type_struct, unsigned int *wsize, va_list args);
char *itoa(int num, char *str, int base);
#endif
