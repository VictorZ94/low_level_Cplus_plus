#include <iostream>
#include "prototype.h"

/**
 * main - Enter pointer function
 * prints the numbers natural 
 * 
 * Return: Always 0
 */
using namespace std;
int main(void)
{
	int i = 0;
      int sum = 0;
	while (i <= 10)
	{
		sum += i++;
	}
      cout<< sum << endl;
return (0);
}
