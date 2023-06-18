#include <iostream>

using namespace std;

int cubic(int a){return a * a * a;}

int main(){
	int n;
	while (cin >> n){
		if (n == cubic(n % 10) + cubic(n / 10 % 10) + cubic(n / 100))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
