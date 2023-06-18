#include <iostream>

using namespace std;

int main(){
	int i;
	while (cin >> i){
		if (i > 31)
			cout << "Value of more than 31\n";
		else
			cout << (1LL << i) << "\n";
	}
	return 0;
}
