#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<long long int> prime;
vector<bool> isprime(1e6 + 3, true);

void sieve(){
	isprime[0] = isprime[1] = false;
	for (long long int i = 2; i * i < 1e6 + 3; i++){
		if (!isprime[i])
			continue;
		prime.push_back(i);
		for (long long a = i * i; a < 1e6 + 3; a += i)
			isprime[a] = false;
	}
}

int main(){
	sieve();
	long long in;
	while (cin >> in){
		auto it = lower_bound(prime.begin(), prime.end(), in);
		it--;
		cout << *it << "\n";
	}
	return 0;
}
