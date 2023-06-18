#include <iostream>
#include <stack>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	stringstream ss;
	string str;
	while (getline(cin, str)){
		ss << str;
		vector<int> arr;
		int temp;
		while (ss >> temp){
			arr.push_back(temp);
		}
		for (int i = arr.size() - 1; i >= 0; i--){
			if (i != arr.size() - 1)
				cout << " ";
			cout << arr[i];
		}
		ss.clear(); 
		cout << "\n";
	}
	return 0;
}
