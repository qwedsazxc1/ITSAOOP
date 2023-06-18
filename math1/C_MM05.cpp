#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double a;
	while (cin >> a){
		double ans = a * a;
		ans *= 10;
		ans = round(ans);
		ans /= 10;
		cout << fixed << setprecision(1) << ans << "\n";
	}
	return 0;
}
