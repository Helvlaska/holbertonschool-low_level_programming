#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s /*définition de la structure de la liste chainée*/
{
    char *str; /*type de donnée du noeud*/
    unsigned int len; /*type de donnée du noeud*/
    struct list_s *next; /*pointeur pour passer au noeud suivant*/
} list_t;

int _putchar(char c);

#endif