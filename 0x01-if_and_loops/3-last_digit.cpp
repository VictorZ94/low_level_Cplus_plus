#include <cstdlib>
#include <iostream>
#include <ctime>
#include <stdio.h>

using namespace std;

int main()
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	m = n % 10;

	if(m > 5)
	{
		cout<< "Last digit of "<< n<< " is "<< m<< " and is greater than 5"<< endl;
	}
	else if (m == 0)
	{
		cout<< "Last digit of " << n<< " is " << m<< " is Zero"<< endl;

	}
	else
	{
		cout<< "Last digit of "<< n<< " is "<< m<< " and is less than 6 and not 0"<< endl;
	}

  return (0);
}
