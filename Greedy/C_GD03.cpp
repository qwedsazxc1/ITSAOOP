#include <iostream>

using namespace std;
typedef long long ll;

int main(){
	long long in;
	while (cin >> in){
		ll l = 0, r = in, ans = 0;
		while (l <= r){
			ll mid = (l + r) / 2;
			ll temp = mid * (mid + 1) / 2;
			if (temp > in){
				r = mid - 1;
			}
			else{
				ans = mid;
				l = mid + 1;
			}

		}
		cout << ans << "\n";
	}
	return 0;
}
