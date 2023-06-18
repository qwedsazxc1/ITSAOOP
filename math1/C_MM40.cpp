#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++){
		if (i != 1)
			cout << " + ";
		cout << i;
	}
	cout << " = ";
	cout << a * (a + 1) / 2 << "\n";
	return 0;
}
