#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the char c to stdout
 * @c: Char to print
 *
 * Return: On success 1.
 * On error, returned as -1, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
