#include "main.h"

/**
 * printf_rot13 - printf ptr to ROT13 into buffer
 * @args: printf arguments
 * Return: counter
 *
 */

int printf_rot13(va_list args)
{
	int x, y, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (x = 0; s[x]; x++)
	{
		k = 0;
		for (y = 0; alpha[y] && !k; y++)
		{
			if (s[y] == alpha[y])
			{
				_putchar(beta[y]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[x]);
			counter++;
		}
	}
	return (counter);
}
