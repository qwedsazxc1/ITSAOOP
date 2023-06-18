#include <iostream>

using namespace std;

int main(){
	int n = 4, coin[4] = {1, 5, 10, 50};
	int target;
	cin >> target;
	int dp[target + 1] = {1};
	for (int i = 0; i < n; i++)
		for (int j = coin[i]; j <= target; j++){
			dp[j] += dp[j - coin[i]];
		}
	cout << dp[target] << "\n";
	return 0;
}
