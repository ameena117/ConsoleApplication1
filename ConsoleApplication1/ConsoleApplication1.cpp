// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//void odd_even(int x) {
//	cin >> x;
//	string arr[2] = { "even","odd" };
//	cout << arr[x % 2];
//}

int main()
{
	string str = "cat";

	//cin >> str;
	for (int i = (str.length() - 1) ; i >= 0; i--)
	{
		cout << str[i];
	}
}

