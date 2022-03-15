/*
* 3-argument.c - Modulus of complex
* Author: Mozamane
* Date: March 15, 2022
*/

#include "main.h"
#include <math.h>

/**
* argument - return the argument
* @c: structure complex
* Return: double a
*/

double argument(complex c)
{
double a;
a = atan(c.im / c.re);
return (a);
}
