#include "mymath.h"



void readNumber(int &i)
{
	cout << "Podaj liczbe:" << endl;
	cin >> i;
}

bool isPrime(int i)
{
	if(i==2)
	{
		return true;
	}

	for (int dzielnik=3;dzielnik<i;dzielnik++)
	{
		if (i%dzielnik==0)
		{
			return false;
		}
	}
	return true;
}

int main(int argc, char* argv[])
{
	int _number;

	readNumber(_number);
	if(isPrime(_number))
	{
		cout << "yep, it is prime" << endl;
	}

	primeNumbers(_number);

	factorial(_number);

	cout << silnia(_number) << endl;

	cout << "FibonaciFnc: " << fibonaci(_number) << endl;

	cout <<"FibFcn " << fib(_number) << endl;

	cin >> _number;
	return 0;
}
