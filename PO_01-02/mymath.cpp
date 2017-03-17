#include "mymath.h"

void primeNumbers(int n)
{
	cout << "PrimeNumbersFcn"<<endl;
	for (int i=3;i<n;i++)
	{
		if (isPrime(i))
		{
			cout << i<<endl;
		}
	}
}

void factorial(int n)
{
	cout << "factorialFcn = ";

	if (n==0 || n==1)
	{
		cout << "1"<<endl;
	}
	else {
		int sum=1;
		for (int i = 2; i <= n; i++)
		{
			sum *= i;
		}
		cout << n << "!=" << sum << endl;;
	}
}

int silnia(int n)
{
	if (n == 0) return 1;
	else return n*silnia(n - 1);
}

int fibonaci(int n)
{
	
	if (n<3)
	{
		return 1;
	}else
	{
		n--;
		long long a = 0, b = 1;

		for (int i = 0; i<n; i++)
		{
			b += a;
			a = b - a;
		}
		return b;
	}

}

int fib(int n)
{
	if (n<3)
		return 1;

	return fib(n - 2) + fib(n - 1);
}