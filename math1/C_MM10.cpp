#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	double a;
	while (cin >> a){
		double ans = a * 1.8 + 32;
		ans *= 10;
		ans = round(ans);
		ans /= 10;
		cout << fixed << setprecision(1) << ans << "\n";
	}
	return 0;
}
