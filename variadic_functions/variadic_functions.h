#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
/**
 * struct type_handler - Structure associant un symbole de type
 * à une fonction d'affichage correspondante
 * @symbol: caractère représentant le type ('c', 'i', 'f', 's')
 * @print_func: pointeur vers la fonction de print correspondant au type
 */
typedef struct type_handler
{
	char symbol;
	void (*print_func)(va_list);
} type_handler;

/*****PROTOTYPES DE FONCTION*****/
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
