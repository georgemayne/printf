#include "main.h"

/**
 * print_hex - this function prints a number in hexadecimal base,
 * in lowercase
 * @l: the va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Description: the function calls convert(), which in turn
 * converts the input number into the
 * correct base and returns it as a string.
 * Return: the number of characters to be printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
	count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - this function prints a number in hexadecimal base,
 * hexadecimal base, in uppercase
 * @l: the va_list arguments from _printf
 * @f: the pointer to the struct that tells
 * if a flag is passed to _printf
 * Description: The function call to convert() converts
 * the input number into the appropriate
 * base and returns it as a string.
 * Return: the number of characters to be printed
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
	count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - this function prints a number in base 2
 * @l: the va_list arguments from _printf
 * @f: the pointer to the struct that tells
 * if a flag is passed to _printf
 * Description: The function calls "convert()", which in turn
 * converts the input number into the correct base
 * and returns it as a string.
 * Return: the number of characters to be printed
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - this function prints a number in base 8
 * @l: the va_list arguments from _printf
 * @f: the pointer to the struct that tells
 * if a flag is passed to _printf
 * Description: In this code,the function "convert()" is called,
 * which then converts the input number into the
 * correct base and returns it as a string.
 * Return: the number of charactersto be printed
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
	count += _putchar('0');
	count += _puts(str);
	return (count);
}
