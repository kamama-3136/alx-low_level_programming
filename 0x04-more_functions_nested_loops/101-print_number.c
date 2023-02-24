
#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
<<<<<<< HEAD
unsigned int num;

if (n < 0)
{
num = -n;
_putchar('-');
}
else if
{
num = n;
}

if (num / 10)
{
print_number(num / 10);
}

_putchar((num % 10) + '0');
=======
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	} else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
>>>>>>> 293ab2802f8064f75b10c71df1997ab697c42691
}

