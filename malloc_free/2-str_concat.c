#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatène deux chaînes dans une nouvelle mémoire allouée.
 * @s1: Première chaîne (peut être NULL).
 * @s2: Deuxième chaîne (peut être NULL).
 *
 * Return: Un pointeur vers la nouvelle chaîne concaténée,
 * ou NULL en cas d'échec.
 */

char *str_concat(char *s1, char *s2)
{
	/*initialise deux compteur*/
	int count_s1, count_s2;
	/*2 variables de boucles*/
	int i, j;
	/*creation d'une variable pour fusionner s1 et s2*/
	char *fusion;

	/*calcul de la length de s1*/
	for (count_s1 = 0; s1[count_s1] != '\0'; count_s1++)
	;
	/*calcul de la lenght de s2*/
	for (count_s2 = 0; s2[count_s2] != '\0'; count_s2++)
	;

	/*allocation de mémoire*/
	fusion = malloc(sizeof(char) * (count_s1 + count_s2 + 1));
	/*on verifie si l'allocation est ok*/
	if (fusion == NULL)
		return (NULL);

	/*copier s1 dans fusion*/
	for (i = 0; i < count_s1; i++)
		fusion[i] = s1[i];

	/*copier s2 dans fusion*/
	for (j = 0; j < count_s2; j++)
		fusion[i + j] = s2[j];
	/*ajout du char de fin de string*/
	fusion[i + j] = '\0';

	return (fusion);
}
