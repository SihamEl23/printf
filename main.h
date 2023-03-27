#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* struct format_specifier - defines a structure for symbols and functions
*
* @specifier: The specifier
* @f: The function associated
*/
struct format_specifier
{
	char *specifier;
	int (*f)(va_list);
};
typedef struct format_specifier format_sp_t;

int check_format(const char *format, format_sp_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
int _putchar(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_int(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_int(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);

#endif
