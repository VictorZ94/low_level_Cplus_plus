#include <iostream>
#include "prototype.h"
/**
 * 
 * 
 * 
 */
using namespace std;

int main(void)
{
      int a;
      int b;

      a = 98;
      b = 402;
      cout << "a = " << a << "   b = " << b << endl;
      swap (&a, &b);
      cout << "a = " << a << "   b = " << b << endl;
}
