#include <iostream>

using namespace std;

int main() {
	long int n;
	int result = 0;
	cin >> n;
	while (n > 0) {
		long int sum = 0;
		long int m = n;
		while (m > 0) {
			sum += (m % 10);
			m /= 10;
		}
		n -= sum;
		result++;
	}
	cout << result;
	return 0;
}