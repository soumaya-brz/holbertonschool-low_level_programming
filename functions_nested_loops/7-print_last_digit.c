#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int last_digit;

last_digit = n % 10;        /* On récupère le dernier chiffre */

if (last_digit < 0)         /* Si le nombre est négatif */
last_digit = -last_digit;

_putchar(last_digit + '0'); /* On affiche le chiffre */
return (last_digit);        /* On renvoie sa valeur */
}
