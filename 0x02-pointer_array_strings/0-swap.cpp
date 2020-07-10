#include <iostream>
#include "prototype.h"

/**
 * swap - function to dereference a integer
 * @a: first parameter
 * @b: second parameter
 * 
 * Return: Nothing
 */

void swap(int *a, int *b)
{
      int c;

      c = *a;
      *a = *b;
      *b = c;
}
