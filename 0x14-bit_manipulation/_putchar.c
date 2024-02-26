#include <unistd.h>

/**
 * _putchar - function that writes the character c to stdout
 * @c: Charcter to print
 *
 * Return: 1 on success
 * On error, -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
