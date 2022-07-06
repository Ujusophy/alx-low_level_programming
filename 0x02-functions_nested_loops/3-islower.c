/*
 * File:	3-islower.c
 *
 * Auth	Ujusophy
 */
#include	"main.h"

/**
 * int _islower	-	check	for	lowercase	character
 * Return	1	if	lowercase
 *
 * Return	0	if	otherwise
 */
int _islower(int c)
{
	char	c;

	if	(c	=	'a';	c	<=	'z';	c++)
		return	(1);
	else	(c	=	'A';	c	<=	'Z';	c++)
		return	(0);
}
