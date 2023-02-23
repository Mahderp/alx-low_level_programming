#include "main.h"
#include <unisted.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: 1 if character is uppercase, 0 otherwise.
 */

int _putchar(char c)

{
return (write(1, &c, 1));
}
