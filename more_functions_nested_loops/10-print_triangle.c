#include "main.h"

/**
 * print_triangle - imprime un triangle de # aligné à droite
 * @size: taille du triangle (nombre de lignes)
 *
 * Description: Si size <= 0, affiche simplement un saut de ligne.
 * Chaque ligne contient des espaces puis des #.
 */
void print_triangle(int size)
{
int i, j;

if (size <= 0)
{
_putchar('\n');
return;
}
for (i = 1; i <= size; i++)
{

for (j = i; j < size; j++)
{
_putchar(' ');
}

for (j = 1; j <= i; j++)
{
_putchar('#');
}

_putchar('\n');
}
}
