#include "main.h"

/**
 * leet - encodes a string
 * @str: it's a string
 *
 * Return: modified string
 */

char *leet(char *str)
{
	char *start = str; /*balise en debut de string*/
	/*creation de tableaux*/
	char letter[] = "aAeEoOtTlL";
	char change[] = "4433007711";
	int i; /*gestion de l'index*/

	while (*str) /*boucle sur la string*/
	{
		i = 0;
		while (letter[i]) /*recherche si *str est dans letter*/
		{
			if (*str == letter[i]) /*si oui...*/
			{
				/*on le change avec le char de change*/
				*str = change[i];
			}
			i++;
		}

		str++;
	}
	return (start);
}
