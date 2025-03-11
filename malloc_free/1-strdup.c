#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Crée une copie de str en mémoire dynamique.
 * @str: La chaîne à copier.
 *
 * Return: Un pointeur vers la copie allouée dynamiquement,
 *         ou NULL si l'allocation échoue ou si str est NULL.
 */

char *_strdup(char *str)
{
	/*compteur de length*/
	int count = 0;
	/*balise de retour en arrière*/
	char *start = str;
	/*creer la copie de str*/
	char *str_copie;
	/*variable d'itération*/
	int i;

	/*une fois que j'ai n je peux vérifier si str est vide*/
	if (str == NULL)
	{
		return (NULL);
	}

	/*calcul de la length de str*/
	while (*str)
	{
		str++;
		count += 1;
	}
	/*ou allouer le bonne size de mémoire*/
	str_copie = malloc((count + 1) * sizeof(char));
	/*on reviens au debut de str*/
	str = start;
	/*ensuite je verifie si l'allocation est ok*/
	if (str_copie == NULL)
	{
		return (NULL);
	}
	/*apres je copie colle en boucle la string nx*/
	for (i = 0; i < count; i++)
	{
		str_copie[i] = str[i];
	}
	/*on affiche la copie de str avec un return*/
	return (str_copie);
	/*on libère la mémoire*/
	free(str_copie);
}
