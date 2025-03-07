#include <stdio.h>

/**
 * main - print la length d'arguments du programme
 * @argc: est la length des arguments
 * @argv: un array d'arguments
 *
 * Return: 0 it's function ok
 */

int main(int argc, char *argv[])
{
	/*on ignore argv car pas utilise*/
	(void)argv;

	/*print seulement la length d'argument(s)*/
	printf("%d\n", (argc - 1));

	return (0);
}
