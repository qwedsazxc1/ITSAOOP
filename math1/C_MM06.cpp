#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
	int a;
	while (cin >> a){
		double ans = a * 1.6;
		ans *= 10;
		ans = round(ans);
		ans /= 10;
		cout << fixed << setprecision(1) << ans << "\n";
	}
	return 0;
}
