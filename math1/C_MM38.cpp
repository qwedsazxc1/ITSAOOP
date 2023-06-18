#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
	vector<int> arr(3);
	while (cin >> arr[0] >> arr[1] >> arr[2]){
		sort(arr.begin(), arr.end());
		if (arr[0] + arr[1] <= arr[2]){
			cout << "unfit\n";
		}
		else
			cout << "fit\n";
	}
	return 0;
}
