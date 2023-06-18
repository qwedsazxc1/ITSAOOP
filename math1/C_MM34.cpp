#include <iostream>

using namespace std;

int main(){
	int n;
	while (cin >> n){
		for (int i = 1; i <= n; i++){
			if (n % i != 0)
				continue;
			if (i != 1)
				cout << " ";
			cout << i;
		}
		cout << "\n";
	}
}
