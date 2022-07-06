/*
 * File:	2-print_alphabet_x10.c
 * Auth:	Ujusophy
 */
#include	"main.h"
/**
 * main	-	check	code
 * Return:	Always 0.
 */
int main ()
{
	int	count	=	0;
	char	letter;
	while	(count++	<=	9)
	{
		for	(letter	=	'a';	letter	<=	'z';	letter++)
			_putchar(letter);
		_putchar('\n');
	}
	return	(0);
}
