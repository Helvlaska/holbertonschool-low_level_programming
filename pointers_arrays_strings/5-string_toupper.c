#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 *
 */

char *string_toupper(char *str)
{
	char *start = str; /*balise en debut de string*/

	/*boucle pour checker les caracteres*/
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z') /*si c'est pas une minuscule..*/
		{
			/*convertir en maj. 32 est la diff entre min et maj dans la table ascii*/
			*str -= 32;
		}
		str++;
	}
	return (start);
}
