#include<cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

int main()
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX /2;

  if(n > 0)
    {
      cout<< n << " is Positive"<< endl;
    }
  else if (n == 0)
    {
      cout<< n <<" is Zero"<< endl;
    }
  else
    {
      cout<< n << " is Negative "<< endl;
    }

  return (0);
}
