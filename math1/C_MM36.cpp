#include <iostream>

using namespace std;

int main(){
	int n;
	while (cin >> n){
		if (n >= 3 && n <= 5){
			cout << "Spring\n";
		}
		if (n >= 6 && n <= 8){
			cout << "Summer\n";
		}
		if (n >= 9 && n <= 11){
			cout << "Autumn\n";
		}
		if (n == 12 || n <= 2){
			cout << "Winter\n";
		}
	}
	return 0;
}
