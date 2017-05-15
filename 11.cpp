#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a, b;
	int c;
	cin >> a >> b >> c;
	cout << fixed;
	cout << setprecision(c) << a / b;
	return 0;
}