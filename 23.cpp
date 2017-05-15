#include <iostream>

using namespace std;

long long int k, n;

long long int step(long long int x, long long int m) {
	long long int t, j;
	t = j = 1;
	while (j <= m)
	{
		t *= x;
		j++;
	}
	return t;
}

long long int count(long long int n1, long long int k1) {
	if (n1 == 2) {
		return k1*(k1 - 1);
	}
	else {
		return k1*step(k1 - 1, n1 - 1) - count(n1 - 1, k1);
	}
}

int main() {
	cin >> n >> k;
	if (n == 1) {
		cout << k;
	}
	else {
		if (k == 1 || (n % 2 == 1 && k == 2)) {
			cout << "-1";
		}
		else
		{
			if (k == 2 && n % 2 == 0) {
				cout << 2;
			}
			else {
				cout<<count(n, k);
			}
		}
	}
	return 0;
}