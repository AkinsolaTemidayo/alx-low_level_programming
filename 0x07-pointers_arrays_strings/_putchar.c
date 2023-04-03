#include "maain.h"
#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: Return on success 1;
 * On error, -1 restristed and errno is set apprropraitelly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
