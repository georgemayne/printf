#include "main.h"
#include <unistd.h>

/**
 * _putchar - this function writes the character c to stdout
 * @c: is the character to print
 * Return: 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Description: the _putchar uses a local buffer of 1024 to call write
 * of 1024 to call write as little as possible
 */
int _putchar(char c)
{
	static char buf[1024];
	static int g;

	if (c == -1 || g >= 1024)
	{
	write(1, &buf, g);
	g = 0;
	}
	if (c != -1)
	{
	buf[g] = c;
	g++;
	}
	return (1);
}
/**
 * _puts - this function prints a string to stdout
 * @str: the pointer to the string to print
 * Return: number of characters written
 */
int _puts(char *str)
{
	register int g;

	for (g = 0; str[g] != '\0'; g++)
	_putchar(str[g]);
	return (g);
}
