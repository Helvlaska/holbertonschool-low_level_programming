#include "main.h"

/**
 * _strspn -  gets the length of a prefix substring
 * @s: it's a string
 * @accept: it's a string
 *
 * Return: count is the nb found
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0; /*compteur de char*/
	char *start = accept; /*balise sur le debut de accept*/
	int bool = 0; /*booleen si char s = char accept vaut true or false*/

	/*boucle pour parcourir la string s*/
	while (*s)
	{
		accept = start;
		bool = 0;

		/*boucle pour parcourir la string accept*/
		while (*accept)
		{
			/*si char s est le meme que  char accept...*/
			if (*s == *accept)
			{
				bool = 1;
				break;
			}
			accept++;
		}
		if (bool == 0)
		{
			break;
		}
		count++;
		s++;
	}

	return (count);
}
