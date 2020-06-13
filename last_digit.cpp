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
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		cout<< "Last digit of " << n<< " is " << m<< " is Zero"<< endl;
		printf("Last digit of %d is %d is Zero\n", n, m);

	}
	else
	{
		cout<< "Last digit of "<< n<< " is "<< m<< " and is less than 6 and not 0"<< endl;
		printf("Last digit of %d is %d and is less than 6 not 0\n", n, m);
	}

  return (0);
}
