#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	int a, b, h;
	while (cin >> a >> b >> h){
		cout << "Trapezoid area:" << fixed << setprecision(1) << (a + b) * h / 2.0 << "\n";
	}
	return 0;
}
