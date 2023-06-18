#include <iostream>

using namespace std;

int main(){
	int a;
	while (cin >> a){
		for (int i = 7; i >= 0; i--)
			cout << (bool)((1 << i) & a);
		cout << "\n";
	}
	return 0;
}
