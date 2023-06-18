#include <iostream>

using namespace std;

int main(){

	int x, y;
	cin >> x >> y;
	if (x == 0 && y == 0){
		cout << "Origin\n";
		return 0;
	}
	if (x == 0){
		cout << "y-axis\n";
		return 0;
	}
	if (y == 0){
		cout << "x-axis\n";
		return 0;
	}
	if (x < 0 && y < 0){
		cout << "3rd Quadrant\n";
		return 0;
	}
	if (x < 0){
		cout << "2nd Quadrant\n";
		return 0;
	}
	if (y < 0){
		cout << "4th Quadrant\n";
		return 0;
	}
	cout << "1st Quadrant\n";
}
