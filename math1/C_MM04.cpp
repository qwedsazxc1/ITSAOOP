#include <iostream>

using namespace std;


int main(){
	int a, b;
	cin >> a >> b;
	cout << a << "+" << b << "=" << a + b << "\n";
	cout << a << "*" << b << "=" << a * b << "\n";
	cout << a << "-" << b << "=" << a - b << "\n";
	int temp = a % b;
	if (a % b >= 0)
		cout << a << "/" << b << "=" << a / b << "..." << a % b << "\n";
	else
		cout << a << "/" << b << "=" << a / b - 1 << "..." << a % b + b << "\n";
	return 0;
}
