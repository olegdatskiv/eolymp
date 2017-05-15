#include <iostream>

using namespace std;

int main() {
	long int n;
	cin >> n;
	double s = 0;
	long int result, m = 0, k;
	k = n;
	if (n != 0) {
		do {
			s += 1.0 / k;
			m++;
			k--;
		} while (s <= 0.5);
		m--;
		result = n - m;
		cout << result;
	}
	else
	{
		cout << 0;
	}
	return 0;
}