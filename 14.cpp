#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

int main() {
	int n, coll;
	cin >> coll;
	coll -= 1;
	string tiket;
	cin >> tiket;
	n = stoi(tiket);
	vector<char> prime(n + coll + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i <= n + coll; ++i)
		if (prime[i])
			if (i * 1ll * i <= n + coll)
				for (int j = i*i; j <= n + coll; j += i)
					prime[j] = false;
	for (int i = n + 1; i < prime.size(); i++) {
		if (prime[i]) {
			cout << i - (n + 1);
			return 0;
		}
	}
	cout << -1;
	return 0;
}