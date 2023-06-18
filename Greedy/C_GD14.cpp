#include <iostream>
#include <vector>
#include <cstring>
#define INF 0x3f3f3f3f
using namespace std;

int main(){
	int temp;
	vector<int> arr;
	while (cin >> temp)
		arr.push_back(temp);
	int dp[arr.size() + 1];
	memset(dp, INF, sizeof(dp));
	dp[0] = 0;
	for (int i = 0; i < arr.size(); i++){
		for (int j = 1; j <= arr[i] && j + i <= arr.size(); j++)
			dp[j + i] = min(dp[j + i], dp[i] + 1);
	}
	cout << dp[arr.size() - 1] << "\n";
	return 0;
}
