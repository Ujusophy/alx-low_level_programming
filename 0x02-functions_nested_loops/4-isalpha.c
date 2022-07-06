/*
 * File:	int _isalpha
 *
 *Auth	Ujusophy
 */
#include	"main.h"

/**
 * int _isalpha	-	check	for	alphabetic	character
 * @c: the character to be checked
* Return	1	if	c	is	a	letter
 *
 * Return	0	if	otherwise
 */
int _isalpha(int c)
{
	if	(c	>=	65	&&	c	<=	122)
		return	(1);
	else
		return	(0);
}
