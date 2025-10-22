#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: prints time from 00:00 to 23:59
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
_putchar((hour / 10) + '0');   /* dizaine de l'heure */
_putchar((hour % 10) + '0');   /* unité de l'heure */
_putchar(':');
_putchar((minute / 10) + '0'); /* dizaine de la minute */
_putchar((minute % 10) + '0'); /* unité de la minute */
_putchar('\n');
}
}
}
