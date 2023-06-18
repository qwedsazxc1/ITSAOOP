#include <iostream>

using namespace std;

int main(){
	int n;
	while (cin >> n){
		int count = n / 3;
		cout << (long long)count * (count + 1) / 2 * 3 << "\n";
	}
	return 0;
}
