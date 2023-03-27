#include "main.h"
/**
 * _printf - Produces output according to a format
 * @format: Is a character string. The format string
 * Return: The number of characters printed
 **/
int _printf(const char *format, ...)
{
	int printed_chars;
	format_sp_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_int},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	printed_chars = check_format(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
