#include <iostream>

using namespace std;
typedef long long ll;

int main(){
	ll frac[25] = {1, 1};
	for (ll i = 2; i < 25; i++)
		frac[i] = frac[i - 1] * i;
	ll in;
	while (cin >> in){
		cout << frac[in] << "\n";
	}
	return 0;
}
