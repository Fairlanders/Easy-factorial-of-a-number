#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int main()
{
	int n;
	int long long factorial = 1;
	cout << "Welcome to factorial calculator program. (Fairlanders)" << endl;
	cout << "Please enter the number you want to find the factorial of." << endl;
	cout << "I want to find the factorial of: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		factorial *= i;
	}
	cout << "Factorial of " << n << " = " << factorial;
	system("PAUSE");
}