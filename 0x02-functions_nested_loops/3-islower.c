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
	char	lower;

	if	(lower	=	'a';	lower	<=	'z';	lower++)
		return	(1);
	else	(lower	=	'A';	lower	<=	'Z';	lower++)
		return	(0);
}
