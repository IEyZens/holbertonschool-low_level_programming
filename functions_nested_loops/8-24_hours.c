#include "main.h"

void jack_bauer(void)
{
  int minute, heure;

  for (heure = 0; heure <= 23; heure++)
  {
	  for (minute = 0; minute <= 59; minute++)
    {
      _putchar('0');
      _putchar('0');
      _putchar(':');
      _putchar('0');
      _putchar('0');
    }
  }
}
