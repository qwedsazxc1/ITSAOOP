#include <iostream>

using namespace std;

bool test(int year){
	if (year % 4 != 0)
		return false;
	if (year % 100 != 0)
		return true;
	if (year % 400 != 0)
		return false;
	return true;
}

int main(){
	int n;
	while (cin >> n){
		if (test(n))
			cout << "Bissextile Year\n";
		else
			cout << "Common Year\n";
	}
	return 0;
}
