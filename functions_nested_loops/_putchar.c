#include <unistd.h>
/**
 * main - create function putchar
 *
 * Return: 0 it's ok
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}
