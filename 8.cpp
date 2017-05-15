#include <iostream>
#include <math.h>

using namespace std;

int main() {
	long int l, v, k, r, n, i;
	cin >> n;
	i = floor(sqrt(n));
	k = pow(i, 2);
	r = 4 + 6 * (i - 1) + pow(i - 1,2) * 2;
	if (k < n) {
		for (int j = 1; j <=i; j++) {
			if (j == 1) {
				v = 3;
			}
			else
			{
				v = 2;
			}
			r += v;
			k++;
			if (k == n) {
				i = -1;
				break;
			}
		}
		for (int j = 1; j <= i + 1; j++) {
			if (j == 1) {
				v = 3;
			}
			else
			{
				v = 2;
			}
			r += v;
			k++;
			if (k == n) {
				break;
			}
		}
	}
	cout << r;
	return 0;
}