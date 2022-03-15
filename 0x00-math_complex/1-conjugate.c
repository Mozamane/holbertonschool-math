/*
* 1-conjugate.c - Conjugate of ocmplex
* Author: Mozamane
* Date: March 15, 2022
*/

#include "main.h"
#include <stdio.h>

/**
* conjugate - return the conjugate
* @c: structure complex
* Return: complex
*/

complex conjugate(complex c)
{
c.im *= -1;
return (c);
}
