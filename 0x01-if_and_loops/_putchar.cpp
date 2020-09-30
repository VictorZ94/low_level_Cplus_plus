#include <unistd.h>

/**
 * _putchar - prints at standard output char by char
 * 
 * return: char
 */
int _putchar(int c)
{
      return (write(1, &c, 1));
}
