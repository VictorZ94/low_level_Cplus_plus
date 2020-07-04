#include <iostream>

using namespace std;

int main(void)
{
	int num;

	while (num < 100)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
		if (num != 99)
		{
			putchar(',');
			putchar(' ');
		}	
	num++;
	}

putchar('\n');
return(0);
}
