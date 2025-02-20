#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int minute, heure;

	for (heure = 0; heure <= 23; heure++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar(heure);
			_putchar(heure);
			_putchar(':');
			_putchar(minute);
			_putchar(minute);
			_putchar('\n');
		}
	}
}
