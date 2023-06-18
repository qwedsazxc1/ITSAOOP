#include <iostream>

using namespace std;

void swap(long long &a, long long &b){
	long long temp = a;
	a = b;
	b = temp;
}

int main(){
	int a, b;
	while (cin >> a >> b){
		if (a > b)
			swap(a, b);
		long long count = b - a + 1;
		long long ans = 0;
		ans = count * a;
		ans += count * (count - 1) / 2;
		cout << ans << "\n";
	}
	return 0;
}
