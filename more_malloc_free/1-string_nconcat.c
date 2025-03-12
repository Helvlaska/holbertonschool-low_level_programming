#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatène s1 avec les n premiers caractères de s2.
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 * @n: Nombre de caractères de s2 à copier
 *
 * Return: Ptr sur la nouvelle chaîne concaténée ou NULL en cas d'échec
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	/*création de compteur de length*/
	/*variables de boucles*/
	unsigned int count_s1, count_s2, i, j;
	/*création d'un ptr pour regrouper s1 et n char de s2*/
	char *fusion;

	/*gérer si s1 ou s2 sont vides*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*calcul de length de s1 et s2*/
	for (count_s1 = 0; s1[count_s1] != '\0'; count_s1++)
	;
	for (count_s2 = 0; s2[count_s2] != '\0'; count_s2++)
	;

	/*ajuster n si > s2*/
	if (n > count_s2)
		n = (count_s2);

	/*alloue la mémoire pour s1 et n char de s2*/
	fusion = malloc(count_s1 + n + 1);
	if (!fusion)
		return (NULL);

	/*copie s1 dans fusion*/
	for (i = 0; i < count_s1; i++)
	{
		fusion[i] = s1[i];
	}
	/*copie de n caratères de s2 dans fusion*/
	for (j = 0; j < n; j++)
	{
		fusion[i + j] = s2[j];
	}
	/*ajout du caratère de fin de string*/
	fusion[i + j] = '\0';
	return (fusion);
}
