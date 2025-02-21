#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: starting from 00:00 to 23:59.
 */

void jack_bauer(void)
{
	int seconde;

	for (seconde = 0; seconde < 1440; seconde++)
	{
		int heure = seconde / 60;
		int minute = seconde % 60;

		_putchar('0' + heure / 10);
		_putchar('0' + heure % 10);
		_putchar(':');
		_putchar('0' + minute / 10);
		_putchar('0' + minute % 10);
		_putchar('\n');
	}
}
