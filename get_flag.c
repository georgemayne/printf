#include "main.h"
/**
 * get_flag - turns on flags if _printf finds
 * @s: specifier
 * @f: pointer
 * Return: 1 if flag is on, 0 otherwise.
 */
int get_flag(char s, flags_t *f)
{
	int g = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			g = 1;
			break;
		case ' ':
			f->space = 1;
			g = 1;
			break;
		case '#':
			f->hash = 1;
			g = 1;
			break;
	}
	return (g);
}
