#include <iostream>

using namespace std;

int main(){
	long long in;
	while (cin >> in){
		if (in == 1){
			cout << "NO\n";
			continue;
		}
		bool flag = true;
		for (long long a = 2; a * a < in; a++){
			if (in % a == 0){
				flag = false;
				break;
			}
		}
		cout << (flag ? "YES\n" : "NO\n");
	}
	return 0;
}
