#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int table;

	for (table = 0; table <= 9; table++)
	{
		int chiffre;

		for (chiffre = 0; chiffre <= 9 ; chiffre++)
		{
			int produit = chiffre * table;

			if (chiffre != 0 && produit < 10)
			{
				_putchar(' ');
			}
			if (produit <= 9)
			{
				_putchar('0' + produit);
			}
			else
			{
				_putchar('0' + produit / 10);
				_putchar('0' + produit % 10);
			}
			if (chiffre != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
