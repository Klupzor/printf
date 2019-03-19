#include "holberton.h"

/**
 * my_reverse - function that reverse string
 *
 * @str: array to reverse
 * @len: lenght of arrays
 *
 * Return: Nothing
 *
 **/

void my_reverse(char str[], int len)
{
	int start, end;
	char temp;

	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
	}
}

/**
 * itoa - convert number to a base
 *
 * @num: number to convert
 * @str: string for save the number
 * @base: base to convert number
 *
 * Return: string with number converted to the base
 */

char *itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;
	/* A zero is same "0" string in all base */
	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	/**
	 * negative numbers are only handled if base
	 * is 10 otherwise considered unsigned number
	 */
	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}

	/**
	 * example: rem = 18 % 10 = 8, 8 > 9 No then save '8'
	 * num = 18 / 10 = 1, * rem = 1 % 10 = 1, 1 No the save '1'
	 */
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		num = num / base;
	}
	/* Append negative sign for negative numbers */
	if (isNegative == 1)
	{
		str[i++] = '-';
	}
	str[i] = '\0';
	my_reverse(str, i);
	return (str);
}
