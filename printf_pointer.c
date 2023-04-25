#include "main.h"

/**
 * printf_pointer - function prints an hexgecimal number
 * @val: arguments
 * Return: counter
 */

int printf_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int x;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (x = 0; s[x] != '\0'; x++)
		{
			_putchar(s[x]);
		}
		return (x);
	}

	a = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = printf_hex_aux(a);
	return (b + 2);
}
