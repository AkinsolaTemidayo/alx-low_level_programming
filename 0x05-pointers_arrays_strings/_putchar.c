#include <unistd.h>

/**
 * _putchar - writes character c to sideout
 * @c: char to be printed
 * Return: onsuccess 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
