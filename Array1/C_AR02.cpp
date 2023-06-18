#include <iostream>
#include <vector>

using namespace std;

int main(){
	int temp;
	vector<int> arr;
	while (cin >> temp){
		arr.push_back(temp);
	}
	for (int i = arr.size() - 1; i >= 0; i--){
		if (i != arr.size() - 1)
			cout << " ";
		cout << arr[i];
	}
	cout << "\n";
	return 0;
}
