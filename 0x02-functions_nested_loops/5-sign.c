/**
 * File:	5-sign.c
 *
 * Auth	Ujusophy
 */
#include	"main.h"

/**
 * int print_sign - print sign of a number
 * Return 1 and print + if n is greater than zero
 * Return 0 and print 0 if n is zero
 * Return -1 and print - if n is less than zero
 */
int print_sign(int n)
{

if (n	>	0)
putchar('+');
		return (1);
	{
if (n	==	0)
putchar('0');
			return (0);
}
		{
if (n	>	0)
putchar('-');
				return (-1);
		}
	}
