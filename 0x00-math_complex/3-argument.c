/*
* 3-argument.c - Modulus of complex
* Author: Mozamane Baloyi
* Date: March 09, 2022
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
