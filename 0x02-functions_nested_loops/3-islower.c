/*
 * File:	3-islower.c
 *
 * Auth	Ujusophy
 */
#include	"main.h"

/**
 * int _islower	-	check	for	lowercase	character
 * Return	1	if	c is lowercase
 *
 * Return	0	if	otherwise
 */
int _islower(int c)
{

	if	(c >= 97 && c <= 122)
		return	(1);
	else
		return	(0);
}
