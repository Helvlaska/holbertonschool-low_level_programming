#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: it's the string
 * @needle: it's the substring
 *
 * Return: substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr_ne; /*balise pour gerer needle*/
	char *ptr_ha; /*balise pour gerer haystack*/
	char *start_match; /*balise debut du match*/

	/*si needle est vide*/
	if (*needle == '\0')
	{
		/*on renvoie haystack encore entier*/
		return (haystack);
	}

	/*boucle pour parcourir haystack*/
	while (*haystack)
	{
		if (*haystack == *needle)
		{
			start_match = haystack; /*on save la position du match*/
			ptr_ne = needle; /*balise pr parcourir needle*/
			ptr_ha = haystack; /*balise pr test la suite haystack*/

			/*boucle sur haystack && needle en meme temps && si =*/
			while (*ptr_ha && *ptr_ne && *ptr_ha == *ptr_ne)
			{
				/*tant que c'est ok on avance*/
				ptr_ha++;
				ptr_ne++;
			}

			/*si on parcours tout needle c'est ok*/
			if (*ptr_ne == '\0')
			{
				return (start_match);
			}
		}
		/*passe au caractere suivant si pas de match*/
		haystack++;
	}
	/*si pas match renvoie NULL*/
	return (0);
}
