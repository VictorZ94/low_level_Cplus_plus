#include <iostream>
#include "prototype.h"
/**
 * print_array - Function to print an array
 * @a: array
 * Return: Always 0
 */
using namespace std;
void print_array(int *a)
{
      long unsigned int i;

      i = 0;
      while (i < (sizeof(a)/sizeof(int)))
      {
            putchar(a[i]);
            i++;
      }
putchar('\n');
}
