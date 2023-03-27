#include "main.h"
/**
 * print_char - writes the character
 * @list: list of args
 * Return: char len
 */
int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_string - writes the string
 * @list: list of args
 * Return: len of char printed.
 */
int print_string(va_list list)
{
	int i, count = 0;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 32 && str[i] < 127)
		{
			_putchar(str[i]);
			count++;
		}
		else
		{
			putchar('\\');
			putchar('x');
			if ((str[i] / 16) < 10)
				_putchar((str[i] / 10) + '0');
			else
				_putchar((str[i] / 16) - 10 + 'A');
			if ((str[i] % 16) < 10)
				_putchar((str[i] % 16) + '0');
			else
				_putchar((str[i] % 16) - 10 + 'A');
			count += 4;
		}
	}
	return (count);
}

/**
 * print_percent - to print percentage
 * @list: list of arguments
 * Return: char len
 */
int print_percent(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_int - writes the integer
 * @list: list of arguments
 * Return: num len
 */
int print_int(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_int - writes unsigned integers
 * @list: List of the argumets
 * Return: a count of the numbers
 */
int unsigned_int(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
