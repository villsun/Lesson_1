#include <iostream>

using namespace std;

int Sum(int a, int b)
{
	return a + b;
}


int main()
{
	int a;
	int b;

	cin >> a >> b;

	cout << Sum(a, b) << endl;

	return 0;
}