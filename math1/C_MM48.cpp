#include <iostream>

using namespace std;

long long f(long long x){
	if (x >= 101)
		return x - 10;
	return f(f(x + 11));
}

int main(){
	int t;
	cin >> t;
	while (t--){
		long long in;
		cin >> in;
		cout << f(in) << "\n";
	}
	return 0;
}
