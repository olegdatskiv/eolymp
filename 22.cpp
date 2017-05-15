#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int n = 10000;

int main() {
	int b, a;
	int result = 0;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}
	vector<bool> prime(n + 1, true);
	prime[0] = prime[1] = false;
	for (int i = 2; i <= n; ++i)
		if (prime[i])
			if (i * 1ll * i <= n)
				for (int j = i*i; j <= n; j += i)
					prime[j] = false;
	for (int i = a; i <= b; i++) {
		if (prime[i] == true) {
			int tmp = i;
			string number;
			while (tmp > 0)
			{
				number += to_string(tmp%10);
				tmp /= 10;
			}
			int index = stoi(number);
			if (index<=n && prime[index] == true) {
				result++;
			}
		}
	}
	cout << result;
	return 0;
}