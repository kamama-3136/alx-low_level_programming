#include <stdio.h>
#include <unistd.h>
<<<<<<< HEAD
/**
 * main - Prints out the last part of a quote in the standard error.
 * Return: 1 if success.
=======

/**
 * main - Entry point
 *
 * Description: 'and that piece of art is useful" - Dora Korpar, 2015-10-19'
 *
 * Return: Always 0 (Success)
>>>>>>> d906d4046db07aa3e60b9500ba59e824e5ef7318
 */

int main(void)
{
<<<<<<< HEAD
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	return (1);
=======
        write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
        return (1);
>>>>>>> d906d4046db07aa3e60b9500ba59e824e5ef7318
}
